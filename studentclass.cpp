#include<iostream>
#include<string>
#include<cmath>
using namespace std;
class student
{
    int rno,m;
    string name;
public:
    void get();
    void show();
    void compute();
};
void student::get()
{
    cin>>rno;
    cin>>name;
    for(int i=0;i<5;i++)
    {
        cin>>m[i];
    }
}
void student::compute()
{
    total=0;
    for(i=0;i<5;i++)
    {
        total=total+m[i];
    }
    div=(total/500)*100;
}
void student::show()
{
    cout<<rno;
    cout<<name;
    compute();
    cout<<total<<div;
}
#define max 5
class student
{
    int rno,m[max],total;
    float div;
    char name[20];
public:
    void get();
    void show();
    void display();
};
int main()
{
    student s;
    s.get();
    s.show();
}
