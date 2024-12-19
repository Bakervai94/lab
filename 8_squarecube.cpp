#include<bits/stdc++.h>
using namespace std;
class num{
public:
    int n;
    void input(){
    cout<<"Enter a number: ";
    cin>>n;
    }
};
class square:public num{
public:
    int calculatesquare(){
        return n*n;
    }
};
class cube:public num{
public:
    int calculatecube(){
    return n*n*n;
    }
};
int main(){
square s;
s.input();
cout<<"Square of the number: "<<s.calculatesquare()<<endl;
cube c;
c.n=s.n;
cout<<"Cube of the number: "<<c.calculatecube();
return 0;
}
