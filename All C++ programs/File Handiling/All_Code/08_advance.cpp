//This is a advance level program which is not suitable and is hard for you now.
//We will come back to this again or u can research yourself

#include <iostream>
#include <fstream>
using namespace std;

class Employee {
    char name[30];
    int age;
    int salary;
    char address[30];

public:
    void putData() {
        cout << "Enter employee name: ";
        cin.ignore();  // To ignore any leftover newline character in the buffer
        cin.getline(name, sizeof(name));
        cout << "Enter employee age: ";
        cin >> age;
        cout << "Enter employee salary: ";
        cin >> salary;
        cin.ignore();  // To ignore any leftover newline character in the buffer
        cout << "Enter employee address: ";
        cin.getline(address, sizeof(address));
    }

    void getData() const {
        cout << "Employee Name: " << name << endl;
        cout << "Employee Age: " << age << endl;
        cout << "Employee Salary: " << salary << endl;
        cout << "Employee Address: " << address << endl;
    }

    void writeToFile(fstream &file) const {
        file.write(name, sizeof(name));
        file.write(reinterpret_cast<const char*>(&age), sizeof(age));
        file.write(reinterpret_cast<const char*>(&salary), sizeof(salary));
        file.write(address, sizeof(address));
    }

    void readFromFile(fstream &file) {
        file.read(name, sizeof(name));
        file.read(reinterpret_cast<char*>(&age), sizeof(age));
        file.read(reinterpret_cast<char*>(&salary), sizeof(salary));
        file.read(address, sizeof(address));
    }
};

int main() {
    const int numEmployees = 10;
    Employee employees[numEmployees];

    // Collect employee data
    for (int i = 0; i < numEmployees; ++i) {
        cout << "Enter details for employee " << (i + 1) << endl;
        employees[i].putData();
    }

    // Write data to file
    fstream file("employees.dat", ios::binary | ios::out);
    if (!file) {
        cerr << "Error opening file for writing." << endl;
        return 1;
    }

    for (int i = 0; i < numEmployees; ++i) {
        employees[i].writeToFile(file);
    }
    file.close();

    // Read data from file and display
    file.open("employees.dat", ios::binary | ios::in);
    if (!file) {
        cerr << "Error opening file for reading." << endl;
        return 1;
    }

    cout << "\nEmployee details from file:\n";
    for (int i = 0; i < numEmployees; ++i) {
        cout << "\nEmployee " << (i + 1) << endl;
        employees[i].readFromFile(file);
        employees[i].getData();
    }
    file.close();

    return 0;
}
