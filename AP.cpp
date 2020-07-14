#include<iostream>
using namespace std;
int main()
{
 int i,a=5,d=2,n,an=0,sn=0;
 cin>>n;
 for(i=1;i<=n;i++)
    {
     an=a+((i-1)*d);
     cout<<"\nterm"<<i<<"="<<an<<" ";
     sn=sn+an;
    }
    cout<<"\nsum="<<sn<<endl;
return 0;
}
