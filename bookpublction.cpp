#include<iostream>
using namespace std;
class publication
{
private:
    char publication[30];

public:
    void get()
    {
        cout<<"Publication:";
        cin>>publication;
    }
    void show()
    {
        cout<<"Publication Name:"<<publication<<endl;
    }
};
class Sale_detail
{
private:
    int price;

public:
    void get()
    {
        cout<<"Price:";
        cin>>price;
    }
    void show()
    {
        cout<<"Price:"<<price<<endl;
    }
};
class book:public publication, public Sale_detail
{
protected:
    char bookname[40];

public:
    void get()
    {
        publication::get();
        Sale_detail::get();
        cout<<"Book:";
        cin>>bookname;
    }
    void show()
    {
        publication::show();
        Sale_detail::show();
        cout<<"Book name:"<<bookname<<endl;
    }
};
 main()
{
   book mybook;
   cout<<"Enter book details:-"<<endl;
   mybook.get();
   cout<<"Book Details:-"<<endl;
   mybook.show();
   return 0;
}
