#include<bits/stdc++.h>
using namespace std;
class Time{
 public:
     int h,m,s;
     Time(int hour=0,int minute=0,int second=0):h(hour),m(minute),s(second){}
     void input(){
        cout<<"Enter time(Hours,Minutes,Seconds)";
        cin>>h>>m>>s;
     }
     Time operator +(Time &rhs){
        Time res;
        res.s=s+rhs.s;
        res.m=m+rhs.m+res.s/60;
        res.h=h+rhs.h+res.m/60;
        res.s%=60;
        res.m%=60;
        return res;
     }
     void show(){
     cout<<"The required time is: "<<h<<" "<<m<<" "<<s<<" ";
     }
};
int main(){
    Time a,b,c;
    a.input();
    b.input();
    c=a+b;
    c.show();
    return 0;

}
