#include<iostream>
using namespace std;
int main()
{
    int j;
    int sheet[5];
    cout<<"Enter sheet number:";
    for(int i=0;i<5;i++)
    {
        cin>>sheet[i];
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5-i-1;j++)
        {
            if(sheet[j]>sheet[j+1])
            {
                int temp=sheet[j];
                sheet[j]=sheet[j+1];
               sheet[j+1]=temp;
            }
        }
    }
    cout<<"Sorted sheets :";
    for(int i=0;i<5;i++)
    cout<<sheet[i];
}
