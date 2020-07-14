#include<iostream>
using namespace std;
inline void largest(int a,int b,int c)
{
    if(a>b)
    {
       if(a>c)
       {
           cout<<a;
       }
    }
    else if(b>c)
    {
        cout<<b;
    }
    else
    {
        cout<<c;
    }
}
int main()
{
    int a=9,b=4,c=5;

    largest(a,b,c);

}
