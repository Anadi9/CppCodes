#include<iostream>
using namespace std;

class Employee
{
private:
    int empcode;
    char empname[50];
public:
    void getdata();
    void display();
};
void Employee::getdata()
{
    cin>>empcode;
    cin>>empname;
}
void Employee::display()
{
    cout<<"Employee code:"<<empcode<<endl;
    cout<<"Employee name:"<<empname<<endl;
}
int main()
{
    Employee E;

    int i=6;

    for(i=0;i<6;i++)
    {
        E.getdata();
    }
    for(i=0;i<6;i++)
    {
        E.display();
    }
    return 0;
}
