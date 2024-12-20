/* 09.Write a c++ program to append the contents of one file to another. */

#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ifstream sourceFile("file.txt", ios::in);  
    ofstream destFile("file1.txt", ios::out | ios::app);  

    if (!sourceFile.is_open()) {
        cout << "Source file not found" << endl;
        return 1;
    }
    
    if (!destFile.is_open()) {
        cout << "Unable to open destination file" << endl;
        return 1;
    }
    
    destFile << sourceFile.rdbuf();  
    sourceFile.close();  
    destFile.close();  
    cout << "Content appended successfully" << endl;
    return 0;
}