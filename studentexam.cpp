#include<iostream>
const int MAX_LEN = 25;
using namespace std;
class person
{
private:
    char name[MAX_LEN];
    char sex;
    int age;

public:
    void ReadData()
    {
        cout<<"Name:";
        cin>>name;
        cout<<"Sex:";
        cin>>sex;
        cout<<"Age:";
        cin>>age;
    }
    void DisplayData()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Sex:"<<sex<<endl;
        cout<<"Age:"<<age<<endl;
    }
};
class student:public person
{
private:
    int rollno;
    char branch[20];

public:
    void ReadData()
    {
        person::ReadData();
        cout<<"Roll No.:";
        cin>>rollno;
        cout<<"Branch:";
        cin>>branch;
    }
    void DisplayData()
    {
        person::DisplayData();
        cout<<"Roll No.:"<<rollno<<endl;
        cout<<"Branch:"<<branch<<endl;
    }
};
class exam:public student
{
protected:
    int sub1marks,sub2marks;

public:
    void ReadData()
    {
        student::ReadData();
        cout<<"Subject 1 marks: < Max:100 > ?";
        cin>>sub1marks;
        cout<<"Subject 2 marks: < Max:100 > ?";
        cin>>sub2marks;
    }
    void DisplayData()
    {
        student::DisplayData();
        cout<<"subject 1 marks:"<<sub1marks<<endl;
        cout<<"subject 2 marks:"<<sub2marks<<endl;
        cout<<"Total Marks:"<<totalmarks();
    }
    int totalmarks()
    {
        return sub1marks+sub2marks;
    }
};
int main()
{
    exam annual;
    cout<<"Enter Data for Student..."<<endl;
    annual.ReadData();
    cout<<"Student Detais..."<<endl;
    annual.DisplayData();
}
