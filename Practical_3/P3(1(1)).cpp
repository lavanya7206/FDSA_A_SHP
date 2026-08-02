#include<iostream>
using namespace std;
int main()
{
    int marks[5];
    int i,j;
    cout<<"Enter the marks:";
    for(i=0;i<5;i++)
    {
        cin>>marks[i];
    }
    for(int i=0;i<4;i++)
    {
        int min=i;
        for(int j=i+1;j<5;j++)
        {
            if(marks[j]<marks[min])
                min=j;
        }
        int temp=marks[i];
        marks[i]=marks[min];
        marks[min]=temp;
    }
    cout<<"Sorted Array: ";
    for(int i=0;i<5;i++)
        cout<<marks[i]<<" ";
}
