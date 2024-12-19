#include<bits/stdc++.h>
#define PI 3.1416
using namespace std;
double Area(double base,double height){
   return 0.5*base*height;
}
double Area(double radius){
   return PI*radius*radius;
}
double Area(double length,double width, bool isreactangle){
   return length*width;
}
int main(){
    double b,h,r,l,w;
    cout<<"Enter the base and height of the triangle: ";
    cin>>b>>h;
    cout<<"Enter the radius of circle: ";
    cin>>r;
    cout<<"Enter the length and width of the rectangle: ";
    cin>>l>>w;
    cout<<"Area of triangle: "<<Area(b,h)<<endl;
    cout<<"Area of circle: "<<Area(r)<<endl;
    cout<<"Area of rectangle: "<<Area(l,w,true)<<endl;
    return 0;
}
