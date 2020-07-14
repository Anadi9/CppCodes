#include<iostream>
#include<cmath>
using namespace std;
class distance
{
    int d1,d2;
public:
    void get();
    void add();
    void show();
};
void distance::get()
{
    cout<<"d=";
    cin>>d1;
    cout<<"d2=";
    cin>>d2;
}
void distance::add()
{
   int sum=d1+d2;
}
void distance::show()
{
    cout<<"Sum of distances = ";
}
int main()
{
distance d1,d2;
    d1,d2.get();
    d1,d2.add();
    d1,d2.show();
    return 0;
}
