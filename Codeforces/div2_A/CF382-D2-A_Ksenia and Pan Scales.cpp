#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main()
{
        vector<char>left,right,fnl;
        char value;
        int leftInd=0,rightInd=0,fnlInd=0,temp =0,diff=0,index=0;
        bool flag = false;

        while((value=getchar())!='\n')
            {
                if(value == '|')
                    {
                    flag = true;
                    continue;
                    }
                if(!flag)
                    {
                        left.push_back(value);
                        leftInd++;

                    }
                else
                    {
                        right.push_back(value);
                        rightInd++;
                    }

            }
            while((value=getchar())!='\n')
                {
                    fnl.push_back(value);
                    fnlInd++;
                }

        ///input done
/*
        if(leftInd==rightInd)
            {
                if(fnlInd % 2==0)
                    {
                        temp = fnlInd/2;

                        for(int i=0;i<temp;i++)
                            {
                                left.push_back(fnl[i]);
                                leftInd++;
                                right.push_back((fnl[temp+i]));
                                rightInd++;
                            }
                    }
                    else
                    {
                        cout<<"Impossible";
                    }
            }
            else{*/
                diff = abs(leftInd-rightInd);

                if(diff>fnlInd)
                    {
                    cout<<"Impossible";
                    return 0;
                    }
                else
                {
                   if((leftInd+rightInd+fnlInd)%2==0)
                        {
                            temp = (leftInd+rightInd+fnlInd)/2;

                            for(int i=leftInd;i<temp;i++)
                                {
                                    left.push_back(fnl[index++]);
                                    leftInd++;
                                }
                            for(int i=rightInd;i<temp;i++)
                                {
                                    right.push_back(fnl[index++]);
                                    rightInd++;
                                }
                        }
                        else
                        {
                        cout<<"Impossible";
                        return 0;
                        }

                }

            //}

        for(int i=0;i<leftInd;i++)
            {
                cout<<left[i];
            }
            cout<<"|";
        for(int i=0;i<rightInd;i++)
            cout<<right[i];

    return 0;
}
