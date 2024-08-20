//With templates
// There are two types of templates
//  1. Class Template (01,02,03 shows class templates)
//  2. Function Template 

#include <iostream>
using namespace std;

template<class T>
class vector{
    T *v;
    int size;

    public:

    vector(T *a,int size=0) : size(size){
        v = new T[size];
        for(int i=0; i<size; i++){
            v[i] = a[i];
        }
    }
    
    ~vector(){
        delete [] v;
    }

    void displayArr(){
        cout<<"The array is:"<<endl;
        for(int i=0; i<size; i++){
            cout<<v[i]<<endl;
        }
    }

};

int main() {
    // Write C++ code here
    int a[3] = {1,2,3};
    float b[3] = {1.5,2.5,3.5};
    vector <int> v1(a,3);
    vector <float> v2(b,3);
    v1.displayArr();
    v2.displayArr();
    return 0;
}