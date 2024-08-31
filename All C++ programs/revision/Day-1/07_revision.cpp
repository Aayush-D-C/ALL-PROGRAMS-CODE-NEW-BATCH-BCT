#include <iostream>
using namespace std;

void test(int b) {
    // Local class definition
    class sample {
        int a;

    public:
        sample(int a = 0) {
            this->a = a;
        }

        void getA() {
            cout << "The value of a is: " << a << endl;
        }

        static void display() {
            cout << "Hello Everyone" << endl;
        }
    };

    // Call static member function without an instance
    sample::display();

    // Create an instance of the local class
    sample s1(b);
    s1.getA();
}

int main() {
    test(3);
    return 0;
}
