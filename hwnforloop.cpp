#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of rows:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int s=n-1;s>i;s++)
        {
            cout<<" ";
        }
        for(int k=1; k !=(2*1)+1;k++)
        {
            cout<<"*";
        }
         cout<<endl;
    }
    return 0;
}
