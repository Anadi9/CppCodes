#include <iostream>
#include<cmath>
using namespace std;
int max(int a,int b)
{
    return max(a,b);
}
void max(char c,char d)
{
    return max(c,d);
}
double max(double e,double f)
{
    return max(e,f);
}
int main() {
	int a,b;
	char c,d;
	double e,f;

	cin>>a>>b;
	cout<<max(a,b);
	cin>>c>>d;
	cout<<max(c,d);
	cin>>e>>f;
	cout<<max(e,f);
	return 0;

}
