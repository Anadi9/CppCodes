#include<iostream>
using namespace std;
class student
{
private:
    char name[25];

public:
    void get()
    {
        cout<<"Student name: ";
        cin>>name;
    }
    void show()
    {
        cout<<"Student name:"<<name<<endl;
    }
};
class internal_exam: public virtual student
{
protected:
    int x;

public:
    void get()
    {
        // student::get();
        cout<<"Score in internals: ";
        cin>>x;
    }
    void show()
    {

        cout<<"Score in internals: "<<x<<"/50"<<endl;
    }
};
class external_exam:public virtual student
{
protected:
    int y;

public:
    void get()
    {
      //  student::get();
        cout<<"Score in externals: ";
        cin>>y;
    }
    void show()
    {
        cout<<"Score in externals: "<<y<<"/50"<<endl;
    }
};
class result:public internal_exam, public external_exam
{
    int result;
public:
    void get()
    {
       student::get();
       internal_exam::get();
        external_exam::get();
        result=x+y;

    }
    void show()
    {
        student::show();
        internal_exam::show();
        external_exam::show();
        cout<<"Result: "<<x+y<<"/100"<<endl;

    }
};
main()
{
    result Student;
    cout<<"Enter Score:-"<<endl;
    Student.get();
    cout<<endl;
    cout<<"Result:-"<<endl;
    Student.show();
    cout<<endl;

}
