#include<iostream>
#include<cmath>
using namespace std;
class data
{
    int x,y;
    int max();
    public:
    int get();
    void show();
};
int data::max()
{
    if(x>y)
        return x;
    else
        return y;
}
int data::get()
{
    cin>>x>>y;
}
void data::show()
{
    cout<<max()<<" "<<"is greater";
}
int main()
{
    data d;
    d.get();
    d.show();
    return 0;
}
