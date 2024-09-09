// Write a program to write the details of a student to a file until the user says “no”. Also,
// search the data of a student from the file based on their roll number.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Students
{
public:
    string name;
    int age;
    int roll_no;

    void putData()
    {
        cout << "Enter student name: ";
        getline(cin, name);
        cout << "Enter your age: ";
        cin >> age;
        cout << "Enter roll no: ";
        cin >> roll_no;
        cout << endl;
    }

    void getData()
    {
        cout << "Student Name: " << name << endl;
        cout << "Student Age :" << age << endl;
        cout << "Student Roll No :" << roll_no << endl
             << endl;
    }

    int get_rn()
    {
        return roll_no;
    }
};

int main()
{
    Students s1;
    fstream file;
    int choice, s_roll_no;
    bool found = false;

    file.open("student", ios::out | ios::binary);
    if (!file)
    {
        cerr << "Error: File cannot be created" << endl;
        return 1;
    }

    do
    {
        cout << "Enter student details for student" << endl;
        s1.putData();

        file.write((char *)&s1, sizeof(s1));

        cout << "Do you want to continue adding more details? (1 for yes): ";
        cin >> choice;

    } while (choice == 1);

    file.close();

    file.open("student", ios::in | ios::binary);
    if (!file)
    {
        cerr << "Error: File cannot be opened" << endl;
        return 1;
    }

    cout << "Enter the roll no of the student for showing records: ";
    cin >> s_roll_no;

    // Loop through all records in the file
    while (file.read((char *)&s1, sizeof(s1)))
    {
        if (s1.get_rn() == s_roll_no)
        {
            cout << "Student record found!" << endl;
            s1.getData();
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Student record not found." << endl;
    }

    file.close();
    return 0;
}