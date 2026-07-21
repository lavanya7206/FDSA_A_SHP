#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    cout<<"No. of items = "<<n<<endl;
    int arr[100];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long h;
    cin>>h;
    cout<<"Total no of hours is ="<<h<<endl;
    h=h%n;
    for(i=h;i<n;i++)
    {
        cout<<arr[i];
    }
    for(i=0;i<h;i++)
    {
        cout<<arr[i];
    }
}
