#include<bits/stdc++.h>
using namespace std;
class student{
public:
    string name;
    string sem;
    int rollno;
    char section;
    int marks[5];
    void input(){
    cin.ignore(); // Clear input buffer before using getline
    cout<<"Enter name: "<<endl;
    getline(cin,name);
    cout<<"Enter semester: "<<endl;
    getline(cin,sem);
    cout<<"Enter rollno: "<<endl;
    cin>>rollno;
    cout<<"Enter section: "<<endl;
    cin>>section;
    cout<<"Enter marks in 5 subjects: ";
    for(int i=0;i<5;i++){
        cin>>marks[i];
    }
    }
    int Totalmarks(){
        int t=0;
        for(int i=0;i<5;i++){
            t+=marks[i];
        }
        return t;
    }
    void display(){
        cout<<"\nName: "<<name<<endl;
        cout<<"\nSemester: "<<sem<<endl;
        cout<<"\nRoll No: "<<rollno<<endl;
        cout<<"\nSection: "<<section<<endl;
        cout<<"\nMarks in 5 subjects: ";
        for(int i=0;i<5;i++){
            cout<<marks[i]<<" ";
        }
        cout<<" Total marks: "<<Totalmarks()<<endl;
    }
};
int main(){
    int n;
    cout<<"Enter the number of students: ";
    cin>>n;
    student* students=new student[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the details for student "<<i+1<<" : "<<endl;
        students[i].input();
    }
    cout<<"\nDisplaying student information: "<<endl;
    for(int i=0;i<n;i++){
        students[i].display();
    }
    delete[] students;
    return 0;
}