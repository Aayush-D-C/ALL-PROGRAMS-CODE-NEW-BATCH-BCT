/*
    We have seen quite usefulness of the template and here are some more concepts to grab. Remember when we used to
    use scope resoultion operator ( :: ) for the functions outside the class it was defined to.

    Similary, you may ask is there any way to use the same concepts but for the templates??

    The answer is Yes!. Yes you can u, here is the synatx for that:

    Template<class T>
    returntype classname <T> :: functionname(arglist)
    {
            // .....
            // Function body
            // .....
    }

    Lets's take a example of how we will do this shall we?
    Lets's copy the code from
    ---->> 01_with_templates.cpp <<-----

    //Review
*/

#include <iostream>
using namespace std;

template <class T>
class vector
{
    T *v;
    int size;

public:
    vector(T *a, int size = 0) : size(size);

    void displayArr();

    ~vector()
    {
        delete[] v;
    }
};

template <class T>
vector<T>::vector(T *a, int size = 0) : size(size)
{
    v = new T[size];
    for (int i = 0; i < size; i++)
    {
        v[i] = a[i];
    }
}

template <class T>
void vector<T>::displayArr()
{
    cout << "The array is:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << endl;
    }
}

int main()
{
    // Write C++ code here
    int a[3] = {1, 2, 3};
    float b[3] = {1.5, 2.5, 3.5};
    vector<int> v1(a, 3);
    vector<float> v2(b, 3);
    v1.displayArr();
    v2.displayArr();
    return 0;
}