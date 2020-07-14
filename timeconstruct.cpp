#include<iostream>
using namespace std;

class Time
{
private:
    int hours,minutes,seconds;
public:
    Time()
    {
        hours=minutes=seconds=0;
    }
    Time(int h,int m,int s)
    {
        hours=h;
        minutes=m;
        seconds=s;
    }
    void addtime(Time x,Time y)
    {
        seconds = x.seconds + y.seconds;
        if(seconds>59)
        {
           seconds-=60;
           minutes++;
        }
        minutes += x.minutes + y.minutes;
        if(minutes>59)
        {
           minutes-=60;
           hours++;
        }
        hours+=x.hours+y.hours;
    }
    void showtime()
    {
        cout<<hours<<":"<<minutes<<":"<<seconds;
    }
};
int main()
{
    Time t1(10,12,30);
    Time t2(11,15,45);
    Time t3;

    cout<<"\nTime is:";
    t1.showtime();
    cout<<"\nTime is:";
    t2.showtime();

    t3.addtime(t1,t2);
    cout<<"\nTime is:";
    t3.showtime();
}
