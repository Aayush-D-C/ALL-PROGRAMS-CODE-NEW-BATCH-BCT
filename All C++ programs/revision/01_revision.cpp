#include<iostream>
using namespace std;

class test{
    public:
        test(){
            cout<<"Constructor"<<endl;
        }
        
        ~test(){
            cout<<"Destructor"<<endl;
        }

};

int main(){
    test t1;
return 0;
}