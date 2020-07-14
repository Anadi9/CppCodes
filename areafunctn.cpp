#include<iostream>
#include<cmath>
using namespace std;

int areasqaure(int s)
{
    int area;
    area=s*s;
    return area;
}
int arearectangle(int l,int b)
{
    int area;
    area=l*b;
    return area;
}
double areatriangle(double ba,double h)
{
    double area;
    area=(1/2*(ba*h));
    return area;
}
int main()
{
    int s,l,b;
    float ba,h;

    cout<<"s=";
    cin>>s;
    cout<<"Area of square="<<s*s<<endl;

    cout<<"l=";
    cin>>l;
    cout<<"b=";
    cin>>b;
    cout<<"Area of rectangle="<<l*b<<endl;

    cout<<"ba=";
    cin>>ba;
    cout<<"h=";
    cin>>h;
    cout<<"Area of triangle="<<(1/2*(ba*h))<<endl;
    return 0;
}
