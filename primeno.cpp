#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter the number to check prime:";
    cin>>n;
    for(i=2;i<n/2;i++)
    {
        if((n%i)==0)
        {
            cout<<"not prime"<<endl;
            break;
        }
    }
    if (i==n/2)
    {
        cout<<"is a prime no."<<endl;
    }
    return 0;
}
