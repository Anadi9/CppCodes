#include<iostream>
using namespace std;
void get_array(int a[5][5],int x,int y);
int main()
{
    int a[5][5],m,n,i,j;

     cout<<"Enter the value of m and n:";
    cin>>m>>n;
    get_array(a,m,n);
    cout<<endl;
    cout<<"Matrix:"<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<<"\t";
        }cout<<endl;
    }
    return 0;
}
void get_array(int a[5][5],int x,int y)
{
    int i,j;

    cout<<"Enter the elements of matrix:";
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            cin>>a[i][j];
        }
    }
}

