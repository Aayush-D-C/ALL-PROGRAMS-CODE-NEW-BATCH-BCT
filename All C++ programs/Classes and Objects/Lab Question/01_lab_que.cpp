/*
    Before starting the class and objects we need to learn a concept of structure firstly this is a sample question
    from lab report LAB-2 | Q.E. 1
*/

#include <iostream>
using namespace std;
struct date
{
    int yy, mm, dd;
} d;
struct hospital
{
    string name, illness, gender;
    int age, bedno;
    struct date dob;
    struct date doa;
} hs[50];
int main()
{
    int i, n;
    cout << "enter the number of patients" << endl;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "Enter the patients no  " << i + 1 << "name,age,gender,illness and bed no " << endl;
        cin >> hs[i].name >> hs[i].age >> hs[i].gender >> hs[i].illness >> hs[i].bedno;
        cout << "Enter the patients date of birth in yy/mm/dd format" << endl;
        cin >> hs[i].dob.yy >> hs[i].dob.mm >> hs[i].dob.dd;
        cout << "Enter the patients date of admission in yy/mm/dd format" << endl;
        cin >> hs[i].doa.yy >> hs[i].doa.mm >> hs[i].doa.dd;
    }
    for (i = 0; i < n; i++)
    {
        cout << "The patients no " << i + 1 << " info is" << endl;
        cout << "name :" << hs[i].name << "  age: " << hs[i].age << " gender: " << hs[i].gender << " illness: " << hs[i].illness << "  bed no:" << hs[i].bedno;
        cout << " doa: " << hs[i].doa.yy << "-" << hs[i].doa.mm << "-" << hs[i].doa.dd << endl;
        cout << " dob: " << hs[i].dob.yy << "-" << hs[i].dob.mm << "-" << hs[i].dob.dd << endl;
    }
    return 0;
}