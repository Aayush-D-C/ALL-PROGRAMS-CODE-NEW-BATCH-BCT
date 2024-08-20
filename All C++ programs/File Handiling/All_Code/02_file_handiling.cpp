// 2. opening files using open()

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string name;

    // one object of ofstream is created and
    // used open() : memebr fucntion of ofstream file to take the file name as input

    ofstream outf;
    outf.open("data1");
    cout << "Enter your name:";
    cin >> name;
    outf << name;
    outf.close();

    outf.open("data2");
    cout << "Enter your name:";
    cin >> name;
    outf << name;
    outf.close();
    return 0;
}