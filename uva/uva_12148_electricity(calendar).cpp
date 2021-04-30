#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<utility>
#include<climits>
#include<cstring>
#include<string>

using namespace std;

#define ll long long
#define mod 1000000007
#define f first
#define s second
#define si(x)   scanf("%d",&x)
#define sl(x)   scanf("%lld",&x)
#define pi pair<int,int>
#define pb push_back
#define mp make_pair
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)

int month[]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
bool checkWithprev(int prevDay,int prevMon, int prevYr, int presDay, int presMon, int presYr)
    {
        if(--presDay==0)
            {
                if(--presMon==0)
                    {
                        --presYr;
                        presMon = 12;
                    }
                    presDay = month[presMon-1]; ///prev == day month year calculated for normal case

            ///check if leap year
            bool leapYr = (presYr % 4 == 0 && (presYr % 100 !=0 || presYr % 400 ==0));
            if(presMon==2 && leapYr)
                presDay = 29;
            }
        return prevDay==presDay && prevMon==presMon && prevYr==presYr;

    }
int main() {
    fastio;
    freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
        int n;
        int prevDay=0,prevMonth=0,prevYear=0,prevUnit=0;
        while(cin>>n,n)
            {


                int sum=0,Count=0;

                while(n--)
                    {
                        int presentDay,presentMonth,presentYear,presentUint;
                        cin>>presentDay>>presentDay>>presentYear>>presentUint;
                        if(checkWithprev(prevDay,prevMonth,prevYear,presentDay,presentMonth,presentYear))
                            {
                                sum += presentUint-prevUnit;
                                Count++;

                            }
                        prevDay = presentDay;
                        prevMonth = presentMonth;
                        prevYear = presentYear;
                        prevUnit = presentUint;
                    }
                    cout<<Count<<" "<<sum<<"\n";
            }


    return 0;
}
/*
int M[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

bool oneday(int ad, int am, int ay, int bd, int bm, int by) {
    if (--bd == 0) {
        if (--bm == 0) {
            --by;
            bm=12;
        }

        bd = M[bm-1];

        bool isleap = (by%4==0 && (by%100!=0 || by%400==0));
        if (bm==2 && isleap) bd=29;
    }
    return ad==bd && am==bm && ay==by;

}

int main() {
    freopen( "input.txt" , "r" , stdin );
    int n, ad=0, am=0, ay=0, ac=0;
    while(cin >> n, n) {
        int sum = 0, count=0;
        while(n--) {
            int bd, bm, by, bc;
            cin >> bd >> bm >> by >> bc;
            if (oneday(ad, am, ay, bd, bm, by)) {
                sum += bc-ac; count++;
            }
            ad = bd; am = bm; ay = by; ac = bc;
        }
        cout << count << " " << sum << endl;
    }

    return 0;
}*/
