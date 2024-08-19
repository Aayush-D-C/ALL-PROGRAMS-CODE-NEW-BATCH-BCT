// Opening and Closing of file
/*There are two ways to open a file
    1. Opening files using constructor
    2. opening files using open()
*/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    // First approcah by constructor
    string name;
    int age;

    // Opening a file name example in output fstream by passing file as an constructor for the class fstream
    ofstream outf("example");

    cout << "Enter your name:";
    cin >> name;
    // Writing name in file
    outf << name << endl;

    cout << "Enter your age:";
    cin >> age;
    // Writing age in file
    outf << age << endl;

    // File closed
    outf.close();

    // Opening a file name example in input fstream by passing file as an constructor for the class fstream
    ifstream inf("example");
    inf >> name;
    inf >> age;
    cout << "Name:" << name << endl;
    cout << "Age:" << age << endl;

    return 0;
}