#include<iostream>
using namespace std;
class DB;
class DM
{
private:
    int m,cm;
public:
    void getdata()
    {
        cout<<"Enter the distance in(meter-centimeter):";
        cin>>m>>cm;
    }
    void display()
    {
        cout<<"\nThe distance is:";
        cout<<m<<" meters and "<<cm<<" centimeter";
    }
    friend void add(DM d1,DB d2);
};
class DB
{
int ft,in;
public:
    void getdata()
    {
        cout<<"\nEnter the distance in(feet-inch)";
        cin>>ft>>in;
    }
    void display()
    {
        cout<<"\nThe distance is:";
        cout<<ft<<" feet and "<<in<<" inch";
    }
    friend void add(DM d1,DB d2);
};
void add(DM d1,DB d2)
{
    int ch;
    cout<<"\nPress 1 for metre-centimetre \nPress 2 for feet-inches \nSelect  your choice:";
    cin>>ch;

    if(ch==1)
    {
        DM d;
        int c=(d1.m*100 + d1.cm + d2.ft*30.48 + d2.in*2.54);
        if(c>=100)
        {
            d.m=c/100;
            d.cm=c%100;
        }
        else
        {
            d.m=0;
            d.cm=0;
        }
        d.display();
    }
    else
    {
        DB d;
        int i=(d1.m*39.37 + d1.cm*.3937008 + d2.ft*12 + d2.in);
        if(i>=12)
        {
            d.ft=i/12;
            d.in=i%12;
        }
        else
        {
            d.ft=0;
            d.in=0;
        }
        d.display();
    }
}
int main()
{

    DM d1;
    DB d2;
    d1.getdata();
    d2.getdata();
    add(d1,d2);
}
