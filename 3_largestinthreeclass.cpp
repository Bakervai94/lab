#include<iostream>
using namespace std;
class B;
class C;
class A{
public:
    int value;
    A(int v):value(v){}
    friend int greatest(A &a,B &b,C &c);
    void display(){
        cout<<"\nValue in A: ";
    }
};
class B{
public:
    int value;
    B(int v):value(v){}
    friend int greatest(A &a,B &b,C &c);
    void display(){
        cout<<"\nValue in B: ";
    }
};
class C{
public:
    int value;
    C(int v):value(v){}
    friend int greatest(A &a,B &b,C &c);
    void display(){
        cout<<"\nValue in C: ";
    }
};
int greatest(A &a,B &b,C &c){
    return max(a.value,max(b.value,c.value));
}
int main(){
    int x,y,z;
    cout<<"\nClass A value: ";
    cin>>x;
    A oba(x);
    cout<<"\nClass B value: ";
    cin>>y;
    B obb(y);
    cout<<"\nClass C value: ";
    cin>>z;
    C obc(z);
    int max=greatest(oba,obb,obc);
    cout<<"Greatest amoung the numbers: "<<max;
    return 0;
}



