// Q.E.2----->for one employee//
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
void employ::display()
{
    cout << "The employee data are" << endl;
    cout << " name  : " << name << " id : " << emp_id << " address : " << address << " department : " << department << " salary : " << salary;
}
int main()
{
    employ aa;
    aa.input();
    aa.display();
    return 0;
}