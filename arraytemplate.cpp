#include<bits/stdc++.h>

using namespace std;

template <class T>
void sortarr(T a[],int n)
{
   int i;
   for(i=0;i<n;i++)
        cout<<a[i]<<" ";
   cout<<endl;
}
int main()
{
    int n=5;
    int intarr[n]={5,2,7,6,4};
    cout<<"int Array:"<<endl;
    sort(intarr,intarr + n);
    sortarr(intarr,n);

    float floatarr[n]={1.4,5.4,6.2,1.1,0.3};
    cout<<"float Array:"<<endl;
    sort(floatarr,floatarr + n);
    sortarr(floatarr,n);

    return 0;
}

