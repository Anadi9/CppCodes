#include<iostream>
using namespace std;
void SI(int,int,int x=5);
int main()
{
    int P,R,T;
    cout<<"Enter the Principle amount =";
    cin>>P;
    cout<<"Enter the Time =";
    cin>>R;
    SI(P,T);
}
void SI(int P,int T,int R)
{
    int I;
    if(T>5)
    {
        cout<<"Enter the value of R =";
        cin>>R;
    }
    I=(P*T*R)/100;
    cout<<"simple interest is ="<<I<<endl;
    cout<<"Amount is ="<<I+P;
}
