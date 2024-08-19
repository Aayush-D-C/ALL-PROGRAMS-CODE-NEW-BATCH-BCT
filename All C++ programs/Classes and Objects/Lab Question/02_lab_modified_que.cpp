// for 50 employee and salary above 55000//
#include <iostream>
using namespace std;
class employ
{
    int emp_id;
    float salary;
    string name, address, department;

public:
    void input()
    {
        cout << "enter employee name , id , address , department and salary" << endl;
        cin >> name >> emp_id >> address >> department >> salary;
    }
    void display();
};
void employ::display() // class name amnd scope resolution operator//
{
    cout << "The employee data are" << endl;
    if (salary > 5500)
    {
        cout << "The employee data are" << endl;
        cout << " name  : " << name << " id : " << emp_id << " address : " << address << " department : " << department << " salary : " << salary << endl;
    }
    else
    {
        cout << "increase salary :D";
    }
}
int main()
{
    employ aa[50];
    for (int i = 0; i < 50; i++)
    {
        aa[i].input();
        aa[i].display();
    }
    return 0;
}