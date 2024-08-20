#include <iostream>
using namespace std;

template <class T>
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a, b;
    cout << "Enter two numbers:";
    cin >> a >> b;
    cout << "Value of a and b before swapping: " << a << " and " << b << endl;
    swap(a, b);
    cout << "Value of a and b after swapping: " << a << " and " << b << endl;
    return 0;
}