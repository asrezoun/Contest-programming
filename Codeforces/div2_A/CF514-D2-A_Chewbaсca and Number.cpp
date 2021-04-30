#include<cstdio>
#include<vector>

using namespace std;
typedef long long ll;
int main()
{
    ll number,rem;
    vector<int>newNum;
    int Size;

    scanf("%lld",&number);

    while(1)
        {
            rem = number%10;
            number = number/10;

            if(number==0)
                {
                    if (rem<9 && rem>4)
                        newNum.push_back(9-rem);
                    else
                        newNum.push_back(rem);
                    break;
                }
            if(rem>4)
                     newNum.push_back(9-rem);
            else
                    newNum.push_back(rem);
        }
        Size = newNum.size();

        for(int i = Size-1; i>=0;i--)
            printf("%d",newNum[i]);
    return 0;

}
