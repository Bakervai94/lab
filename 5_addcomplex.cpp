#include<bits/stdc++.h>
using namespace std;
class Complex{
public:
    double imag;
    double real;
    Complex(double r=0,double i=0):real(r),imag(i){}
    void input(){
     cout<<"Enter the real and imaginary part: ";
     cin>>real>>imag;
    }
    void show(){
        cout<<real;
        if(imag>0){
            cout<<" + "<<imag<<" i ";
        }
        else{
            cout<<" - "<<imag<<" i ";
        }
    }
    Complex operator +(Complex &rhs){
    return Complex(real+rhs.real,imag+rhs.imag);
    }
};
int main(){
    Complex a,b,c;
    cout<<"1st number : ";
    a.input();
    cout<<"2nd number: ";
    b.input();
    c=a+b;
    cout<<"Sum of the numbers: ";
    c.show();
    return 0;
}
