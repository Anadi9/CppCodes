#include<iostream>
using namespace std;
class bank
{
private:
    char name[50];
    char acctyp[50];
    int accno;
    float balance;

public:
    void getdata();
    void deposit();
    void withdraw();
    void display();
};
void bank::getdata()
{
    cout<<"Enter the name of depositor:";
    cin>>name;
    cout<<"Enter the type of account:";
    cin>>acctyp;
    cout<<"Enter the account number:";
    cin>>accno;
    cout<<"Enter the balance amount:";
    cin>>balance;
}
void bank::deposit()
{
    float deposit;
    cout<<"Enter the amount to deposit:";
    cin>>deposit;
    balance=balance+deposit;
}
void bank::withdraw()
{
    float withdraw;
    cout<<"Enter the amount to withdraw:";
    cin>>withdraw;
    balance=balance-withdraw;
}
void bank::display()
{
    cout<<"Name of the depositor:"<<name<<endl;
    cout<<"Account Number:"<<accno<<endl;
    cout<<"Type of account:"<<acctyp<<endl;
    cout<<"Balance amount in the account:"<<balance<<endl;
}
int main()
{
    int i;
    bank A;

    for(i=0;i<10;i++)
    {
        A.getdata();
    }

    do
    {

    }

      return 0;
}
