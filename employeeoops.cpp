#include<iostream>
#include<string>
using namespace std;
 class employee
 {
     public:
     int Id,BS;
     string Name;

     void get()
     {
         cin>>Name;
         cin>>Id;
         cin>>BS;
     }
     void show()
     {
         cout<<"Name: "<<Name<<endl;
         cout<<"Id: "<<Id<<endl;
         cout<<"BS: "<<BS<<endl;
     }
 };
 int main()
 {
     employee E;
     E.get();
     E.show();
return 0;
 }

