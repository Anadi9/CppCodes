#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of (n) :";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int k=0;k!=n-i;k++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<n;i++)
    {
        for(int k=0;k!=i;k++)
        {
            cout<<" ";
        }
        for(int j=i;j<n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }





}
