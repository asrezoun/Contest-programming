#include<iostream>

using namespace std;
///geeks for geeks power set
int main()
{
    char Set[]={'a','b','c'};
    int setSize=3;

    int totalSets = 8;///calculate using 2^n n=setSize

    for(int counter=0;counter<totalSets;counter++) ///0 1..7 porjonto
        {
            for(int j=0;j<setSize;j++)
                {
                    if(counter & 1<<j) ///checking if bit is set or not
                         cout<<Set[j];
                }
                cout<<"\n";
        }
return 0;
}
