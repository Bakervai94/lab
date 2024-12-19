#include<iostream>
using namespace std;
class factorial{
    public:
    int n,i,f;
    factorial(){
        cout<<"Enter a number: ";
        cin>>n;
        f=1;
        for (int i = 1; i <=n; i++)
        {
            f=f*i;
        }
    }
    void display(){
        cout<<"Factorial is: "<<f<<endl;
    }
    
};
int main(){
    factorial fact;
    fact.display();
    return 0;
}