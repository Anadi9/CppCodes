#include<iostream>
#include<cmath>
using namespace std;

int power(int x,int y)
{
    return pow(x,y);
}
float power(float a,int b)
{
    return pow(a,b);
}
int main()
{
    int x,y;
    float a,b;
    cin>>x>>y;
    cout<<pow(x,y);
    cin>>a>>b;
    cout<<pow(a,b);
    return 0;
}
