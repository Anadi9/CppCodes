#include<iostream>
using namespace std;
void swap(int &n1,int &n2)
{
    int n3=n1;
    n1=n2;
    n2=n3;
}
void swap(char &ch1,char &ch2)
{
    char ch3=ch1;
    ch1=ch2;
    ch2=ch3;
}
void swap(float &f1,float &f2)
{
    float f3=f1;
    f1=f2;
    f2=f3;
}
int main()
{
    int n1,n2;
    char ch1,ch2;
    float f1,f2;

    cout<<"enter the n1 and n2:"<<endl;
    cin>>n1>>n2;
    swap(n1,n2);
    cout<<n1<<" "<<n2<<endl;

    cout<<"enter the ch1 and ch2:"<<endl;
    cin>>ch1>>ch2;
    swap(ch1,ch2);
    cout<<ch1<<" "<<ch2<<endl;

    cout<<"enter the f1 and f2:"<<endl;
    cin>>f1>>f2;
    swap(f1,f2);
    cout<<f1<<" "<<f2<<endl;
    return 0;
}
