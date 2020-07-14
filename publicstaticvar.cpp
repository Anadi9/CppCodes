#include<iostream>
using namespace std;
class A
{
private:
    int x;

public:
    static int count;
    void initial()
    {
        count++;
    }
    void display()
    {
        cout<<count;
    }
};
int A::count=0;
int main()
{
    A o;
    o.initial();
    A o1;
    o1.initial();
    o.display();
    o1.display();
}
