/* 10.Write a c++ program to read a set of lines from 
the keyboard and to store it in a specific file. */

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outfile("output.txt");

    if (!outfile) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    cout << "Enter lines of text (type 'exit' to stop):" << endl;
    string line;
    while (getline(cin, line) && line != "exit") {
        outfile << line << endl;
    }

    outfile.close();
    cout << "Lines have been written to output.txt" << endl;

    return 0;
}