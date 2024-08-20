// Templates in C++
/* As we start building our application we start repeating ourselves either we
willingly want or we dont want, similar is the case for class and objects
when a specific datatype is needed to be passed in functions or class
e.g. we want to divide among 2 numbers then we will write a seprate for
the int type and another for the float type but there is a easy way to tackle
that and here comes the templates.
*/

// Without templates
#include <iostream>
using namespace std;

class vector
{
    int *v;
    int size;

public:
    vector(int *a, int size = 0) : size(size)
    {
        v = new int[size];
        for (int i = 0; i < size; i++)
        {
            v[i] = a[i];
        }
    }

    ~vector()
    {
        delete[] v;
    }

    void displayArr()
    {
        cout << "The array is:" << endl;
        for (int i = 0; i < size; i++)
        {
            cout << v[i] << endl;
        }
    }
};

int main()
{
    // Write C++ code here
    int a[3] = {1, 2, 3};
    vector v1(a, 3);
    v1.displayArr();
    return 0;
}