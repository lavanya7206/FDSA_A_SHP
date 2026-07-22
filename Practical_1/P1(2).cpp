#include<iostream>
using namespace std;
int main()
{
    int id;
    cin>>id;
    int books[50];
    for(int i=0;i<id;i++)
    {
        cin>>books[i];
    }
    cout<<"Book ID's borrowed than once :";
    for(int i=0;i<id;i++)
    {
        int count=1;
        bool alreadyPrinted=false;
        for(int k=0;k<i;k++)
        {
         if(books[k]==books[i])
         {
             alreadyPrinted=true;
             break;
         }
        }
        if(alreadyPrinted)
        {
            continue;
        }
        for(int j=i+1;j<id;j++)
        {
            if(books[j]==books[i])
            {
                count++;
            }
            if(count>1)
            {
                cout<<books[i]<<" ";
            }
        }
    }

}
