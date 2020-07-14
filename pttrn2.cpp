#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of rows";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int k=0;k!=(2*i);k++)
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
