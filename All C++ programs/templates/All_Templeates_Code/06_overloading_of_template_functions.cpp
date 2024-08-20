// Template Function with Explicit Function
#include <iostream>
using namespace std;

template <class T>
void display(T x)
{
    cout << "Overloaded template Display 1: " << x << endl;
}

template <class T, class T1>
void display(T x, T1 y)
{
    cout << "Overloaded template Display 2: " << x << " and " << y << endl;
}

void display(int x)
{
    cout << "Explicit Display: " << x << endl;
}

int main()
{
    display(100);
    display(1.5, 'w');
    display('C');
    return 0;
}