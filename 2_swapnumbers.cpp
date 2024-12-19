#include<iostream>
using namespace std;
class B;
class A{
public:
    int value;
    A(int v):value(v){}
    friend void swap(A &a,B &b);
    void display(){
        cout<<"\nValue in A: "<<value;
    }
};
class B{
public:
    int value;
    B(int v):value(v){}
    friend void swap(A &a,B &b);
    void display(){
        cout<<"\nValue in B: "<<value;
    }
};
void swap(A &a, B &b){
    int temp=a.value;
    a.value=b.value;
    b.value=temp;
}
int main(){
    int x,y;
    cout<<"\nEnter the value of class A: ";
    cin>>x;
    A oba(x);
    cout<<"\nEnter the value of class B: ";
    cin>>y;
    B obb(y);
    cout<<"\nBefore swapping: ";
    oba.display();
    obb.display();
    cout<<"\nAfter swapping: ";
    swap(oba,obb);
    oba.display();
    obb.display();
    return 0;
}
