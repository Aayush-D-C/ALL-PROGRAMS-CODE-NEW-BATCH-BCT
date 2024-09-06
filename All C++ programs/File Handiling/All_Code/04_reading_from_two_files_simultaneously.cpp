#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file;

    // Open file for both reading and writing in text mode
    file.open("example", ios::out | ios::trunc);

    if (!file) {
        cerr << "Cannot open file" << endl;
        return 1; // Return a non-zero value to indicate failure
    }

    // Write data to the file
    file << "Hello Everyone";
    cout << "Current read position: " << file.tellg() << endl;
        
    file.close();

    file.open("example", ios::in);

    // Read data from the file
    int size = 80;
    char name[80] = {};

    if (file.eof()!=1) {
        file.getline(name,size);
        cout << name << endl;
        cout << "Current write position: " << file.tellp() << endl;
    } else {
        cerr << "Failed to read from file" << endl;
    }

    file.close();
    return 0;
}
