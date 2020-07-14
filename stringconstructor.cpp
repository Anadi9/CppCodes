#include<iostream>
#include<cstring>
using namespace std;

class String
{
private:
    string a;
public:
    String()
    {

    }
    String(string x)
    {
        a=x;
    }
    void show();
    void add(string &x,string &y);
};
void String::show()
{
    cout<<a;
}
void String::add(string &x,string &y)
{
    string c;
    c=x+y;
    cout<<x+y<<endl;
}
int main()
{
    String s1,s2("Well done!"),s3;
    s1.show();
    s2.show();

}
