#include<cstdio>
#include<cctype>
#include<iostream>

using namespace std;

int main()
{
    int n,total=0,i=0;
    char value[104];
    scanf("%d",&n);
    scanf("%s",&value);
    bool ar[26] ={false};

    while(n--)
        {

            value[i] = tolower(value[i]);
            //cout<<value<<"\n";
            ar[value[i]-'a']= true;
            i++;
        }

    for(int i=0;i<26;i++)
        {
            if(ar[i]==true)
                total++;
        }
    //printf("%d %d\n",n,total);
    if(total<26)
        printf("NO");
    else
        printf("YES");
    return 0;
}
