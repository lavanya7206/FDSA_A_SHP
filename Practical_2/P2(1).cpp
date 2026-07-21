#include<iostream>
#include<string>
using namespace std;
int recursiveSearch(string plates[],int n,string target,int index)
{
    if(index==n)
    {
        return -1;
    }
    if(plates[index] == target)
    {
        return index;
    }
    return recursiveSearch(plates,n,target,index+1);
}
int main()
{
    int n;
    cout<<"Enter the no of vehicles:";
    cin>>n;
    string plates[n];
    cout<<"Enter license plate no:";
    for(int i=0;i<n;i++)
    {
        cin>>plates[i];
    }
    string target;
    cout<<"Enter the target plate no:";
    cin>>target;
    int position=-1;
    for(int i=0;i<n;i++)
    {
        if(plates[i]==target)
        {
            position=i;
            break;
        }
    }
    if(position!=-1)
    {
        cout<<"Iterative search: found at position"<<position<<endl;
    }
    else
    {
        cout<<"Iterative search: plate not found"<<endl;
    }
    int result =recursiveSearch(plates,n,target,0);
    if(result!=-1)
    {
        cout<<"Recursive search found at position"<<result<<endl;
    }
    else
    {
        cout<<"Recursive search - plate not found"<<endl;
    }
    return 0;
}

