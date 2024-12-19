#include<bits/stdc++.h>
using namespace std;
class prime{
public:
    int p;
    prime(int n): p(n){}
    bool isprime(){
        if(p<=1) return false;
        for(int i=2;i<=sqrt(p);++i){
            if(p%i==0){
                return false;
            }
        }
        return true;
    }
    void show(){
     if(isprime()){
        cout<<p<<" is a prime number.";
     }
     else{
        cout<<p<<" is not a prime number.";
     }
     }
};
int main(){
    int x;
    cout<<"Enter the number: ";
    cin>>x;
    prime a(x);

    a.show();
return 0;
}

