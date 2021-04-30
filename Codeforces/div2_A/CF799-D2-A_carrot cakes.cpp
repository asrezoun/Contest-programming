/// 5 ta wrong answer khaisi :p

#include<cstdio>
#include<iostream>

using namespace std;

int main()
{
    int n,t,k,d,alone,time1=0,time2=0,x,y,z;

    scanf("%d %d %d %d",&n,&t,&k,&d);


    if(n>k && n%k!=0)
        z = (n/k)+1; ///ceil korsi
    else
        z = n/k;
    //cout<<t<<" "<<z<<"\n";
    alone = t*z; /// 1 ta diye korte time (n*t)/k

    if(d<t)
        {
            ///time1 +=d; d porjonto wait kortesi tai d add korte hocche
            x = 2*k; /// per unit e process power bere gelo(double cz 2 ta machine)

            time2 = (n*t)/x;
            if(time2<t)
                time2 = t; ///t er cheye kom time asleo amake t wait kortei hobe ques onujai
            time1 = time2+d;

        }
    else{

        y = n-(d/t)*k; ///new n d hoite hoite koyta process hoilo .. y ta baki thaklo
        time1 += t*(d/t); ///d hoite hoite total koto time khoroch hoilo
        x = 2*k;
        time2 = (y*t)/x; /// egula same kaaj
        if(time2<t)
            time2 =t;
        time1 += time2;

    }

   // printf("%d %d\n",alone,time1);

    if(time1<alone)
        printf("YES");
    else
        printf("NO");

    return 0;


}

/* loop diye amar kaaj tai eficiently .. look at the rep
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t,k,d;
    cin>>n>>t>>k>>d;
     int time=0,rep=(n+k-1)/k;
     int ove=0,ove2=d;
     for(int i=0;i<rep;i++)
     {
         if(ove<=ove2)
            ove+=t;
         else
            ove2+=t;
     }
    if(max(ove,ove2)>=t*rep)
        cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
}
/*
