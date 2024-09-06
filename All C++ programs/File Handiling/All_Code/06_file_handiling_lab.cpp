#include <iostream>
#include <fstream>

using namespace std;

int main() {
    fstream file1, file2;
    char ch;

    file1.open("source", ios::binary | ios::in);
    if (!file1.is_open()) {
        cerr << "Cannot open source file" << endl;
        return 1;
    }

    file2.open("destination", ios::binary | ios::out);
    if (!file2.is_open()) {
        cerr << "Cannot open destination file" << endl;
        return 1;
    }

    while (file1.get(ch)) {
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 32;
        }
        file2.put(ch);
    }

    file1.close();
    file2.close();
    file2.open("destination", ios::in);

    while (file2.get(ch)) {
        cout<<ch;
    }

    file2.close();

    return 0;
}
