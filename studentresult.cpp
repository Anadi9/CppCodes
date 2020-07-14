#include<iostream>
using namespace std;

class student
{
private:
    int rollno;
    char name[25];

public:
    void get()
    {
    cout<<"Student name: ";
    cin>>name;
    cout<<"Roll no.: ";
    cin>>rollno;
    }
    void show()
    {
        cout<<"Student name: "<<name<<endl;
        cout<<"Roll no.: "<<rollno<<endl;
    }
};
class exam:public student
{
protected:
    int sub1,sub2,sub3,sub4,sub5,sub6;

public:
    void get()
    {
        student::get();
        cout<<"Subject 1 marks: ";
        cin>>sub1;
        cout<<"Subject 2 marks: ";
        cin>>sub2;
        cout<<"Subject 3 marks: ";
        cin>>sub3;
        cout<<"Subject 4 marks: ";
        cin>>sub4;
        cout<<"Subject 5 marks: ";
        cin>>sub5;
        cout<<"Subject 6 marks: ";
        cin>>sub6;
    }
    void show()
    {
        student::show();
        cout<<"Student 1 marks: "<<sub1<<"/100"<<endl;
        cout<<"Student 2 marks: "<<sub2<<"/100"<<endl;
        cout<<"Student 3 marks: "<<sub3<<"/100"<<endl;
        cout<<"Student 4 marks: "<<sub4<<"/100"<<endl;
        cout<<"Student 5 marks: "<<sub5<<"/100"<<endl;
        cout<<"Student 6 marks: "<<sub6<<"/100"<<endl;
    }
};
class Sport:public exam
{
protected:
    char sport[10];
    char grade;

public:
    void get()
    {
        exam::get();
        cout<<"Sports: ";
        cin>>sport;
        cout<<"Sports Grade: ";
        cin>>grade;
    }
    void show()
    {
       exam::show();
        cout<<"Sport: "<<sport<<endl;
        cout<<"Sports Grade: "<<grade<<endl;
    }
};
class result:public Sport
{
protected:
    int total_marks;
    float avg;
public:
    void get()
    {
        Sport::get();
        total_marks = (sub1+sub2+sub3+sub4+sub5+sub6);
        avg = total_marks/6;
    }
    void show()
    {
        Sport::show();
        cout<<"Total Marks: "<<total_marks<<"/600"<<endl;
        cout<<"Average: "<<avg<<endl;
    }
};

int main()
{
    result annual;
    cout<<"Enter data of student:"<<endl;
    annual.get();
    cout<<endl;
    cout<<"Final Result:"<<endl;
    annual.show();
}
