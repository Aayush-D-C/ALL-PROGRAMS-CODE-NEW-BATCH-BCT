// Using Default Data Types in a Class Definition

#include <iostream>
using namespace std;

template <class T1 = int, class T2 = int>
class Test
{
    T1 a;
    T2 b;

public:
    Test(T1 a, T2 b) : a(a), b(b) {}

    void display()
    {
        cout << a << " and " << b << endl;
    }
};

int main()
{
    // int type and char type
    Test<int, char> T1(3, 'W');
    T1.display();

    // float type and int type
    Test<float, int> T2(3.5, 9);
    T2.display();

    // Default
    Test<> T3(3.5, 'A');
    T3.display();
    return 0;
}