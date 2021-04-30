//ZCO14001

#include<bits/stdc++.h>
using namespace std;

int main()
{
int height,length,temp,command,position = 0;
vector <int> box;

bool box_in_hook = false;


cin>>length>>height;

for(int i =0; i< length; i++)
{
    cin>>temp;
    if (temp<=height)
        {
            box.push_back(temp);
        }
        else{

            box.push_back(0);
        }

}

while(true)
{
    cin>>command;
    if(command == 0)
        break;

    if(command ==1 && position>0) //left
    {
        position--;
    }
    else if ( command == 2 && position != length-1) //go right
    {
        position++;
    }
    else if(command == 3 && box_in_hook == false && box[position]>0  ) //pick up box
    {
        box[position]--;
        box_in_hook = true;

    }
    else if(command == 4 && box_in_hook== true && box[position]<height) //drop box
    {
        box[position]++;
        box_in_hook = false;

    }


}
for (int i =0;i<length;i++)
{
 cout<<box[i]<<" ";
}

return 0;
}
