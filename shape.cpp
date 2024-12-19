#include<bits/stdc++.h>
//#define PI 3.1416
using namespace std;
int volume(int l,int w,int h){
    return(l*w*h);
}
int volume(int x){
    return(x*x*x);
}
float volume(float r,float h,float PI=3.1416){
    return (r*r*h*PI);
}
int main(){
    int l,w,h,x,r,H;
    cout<<"length, width and height of rectangle: ";
    cin>>l>>w>>h;
    cout<<"Enter the side of cube: ";
    cin>>x;
    cout<<"Enter the radius and height of cylinder: ";
    cin>>r>>H;
    cout<<"volume of the rectangle: "<<volume(l,w,h)<<endl;
    cout<<"volume of the cube: "<<volume(x)<<endl;
    cout<<"volume of the cylinder: "<<volume(r,H)<<endl;
    
    return 0;   
}