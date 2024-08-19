// continuos options//
#include <iostream>
using namespace std;
class bank_acc
{
    int acc_no;
    float balance, deposit, withdraw;
    string name, acctype;

public:
    void input()
    {
        cout << "enter account name ,account no ,account type and balance" << endl;
        cin >> name >> acc_no >> acctype >> balance;
    }
    void deposit_amount()
    {
        cout << "enter deposit amount" << endl;
        cin >> deposit;
        balance = balance + deposit;
        display();
    }
    void withdraw_balance()
    {
        cout << "enter withdraw amount" << endl;
        cin >> withdraw;
        balance = balance - withdraw;
        display();
    }
    void display()
    {
        cout << " name : " << name << " account no : " << acc_no << " account type : " << acctype << " balance  : " << balance << endl;
    }
    void choice()
    {
        int n;
        cout << "Do you want to " << endl
             << " 1.withdraw" << endl
             << "2.deposit " << endl
             << "3.check balance" << endl;
        cin >> n;
        switch (n)
        {
        case 1:
            withdraw_balance();
            break;
        case 2:
            deposit_amount();
            break;
        case 3:
            display();
            break;
        default:
            cout << "pls choose the options";
        }
    }
};
int main()
{
    bank_acc aa;
    int x;
    aa.input();
    while (1)
    {
        cout << "press 1 to see menu and 0 to exit " << endl;
        cin >> x;
        if (x == 1)
        {
            aa.choice();
        }
        else if (x == 0)
        {
            break;
        }
    }
    return 0;
}