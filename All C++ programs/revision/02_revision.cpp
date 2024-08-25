// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class test{
    static int count;
    
    public:
    static void showcount(){
        cout<<count<<endl;
        count++;
    }

};

int test :: count;

int main() {
    
    test t[10];
    int i = 0;
    
    while(i<10){
        t[i].showcount();
        i++;
    }


    return 0;
}