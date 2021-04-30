///codechef

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>data;
    int value,temp,depth=0,maxdepth=0,pos=0,maxcount=0,count1=0,count2=0,pos_element=0;
    cin>>value;

    for(int i=0;i<value;i++)
        {
            cin>>temp;
            data.push_back(temp);

        }
    ///max depth
    for(int i=0;i<value;i++)
        {
            if(data[i]==2)
            {
                if(depth>maxdepth)
                    {
                        maxdepth = depth;
                        pos = i;
                    }

                depth--;
            }
            else{
                depth++;

            }

        }

///max elements

    for(int i=0;i<value;i++)
        {
            count2++;

            if(count1==1&&data[i]==2)
                {
                    if(count2>maxcount)
                        {
                            maxcount=count2;
                            pos_element = i-maxcount+2;

                        }
                    count2 =0;

                }
            if(data[i]==1)
                count1++;
            else
                count1--;

        }
cout<<maxdepth<<" "<<pos<<" "<<maxcount<<" "<<pos_element<<endl;

return 0;
}
