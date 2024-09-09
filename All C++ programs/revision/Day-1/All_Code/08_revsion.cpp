/*
    Exception Handiling in C++
*/

#include<iostream>
using namespace std;

class sample{
    int data1;
    char data2;

    public:
    sample(){
        data1 = 0;
        data2 = ' ';
    }

    void display(){
        cout<<"Data 1 = "<<data1;
        cout<<"Data 2 = "<<data2;
    }
};

int main(){
    sample *s_ptr;

    try{
        s_ptr = new sample;
            cout<<"Memeory Allocated Successfully"<<endl;
        if(!s_ptr){
            throw bad_alloc();
        }
    }

    catch(bad_alloc ba){
        cout<<ba.what()<<" | Exception Caught memory allocation failed |"<<endl;
        return 1;
    }

    delete s_ptr;
    return 0;
}