#include<iostream>
using namespace std;

class Shape
{
public:
    double x,y;
    void get_data()
    {
        cout<<"Enter x: ";
        cin>>x;
        cout<<"Enter y: ";
        cin>>y;
    }
    virtual void display_area()=0;
};
class Rectangle:public Shape
{
    double area;
    public:
    void get_data()
    {
        Shape::get_data();
    }
    void display_area()
    {
        area=x*y;
        cout<<"Area of rectangle: "<<area<<endl;
    }

};
class Triangle:public Shape
{
    double area;
    public:
    void get_data()
    {
        Shape::get_data();
    }
    void display_area()
    {
        area=0.5*x*y;
        cout<<"Area of traingle: "<<area<<endl;
    }
};
main()
{
    Shape *ptr;
    Rectangle r;
    ptr=&r;
    ptr->get_data();
    ptr->display_area();
    Triangle t;
    ptr=&t;
    ptr->get_data();
    ptr->display_area();
}
