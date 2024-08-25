// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class test{
    static int a;
    int b;
    
    public:
    
    void getb(){
        cin>>b;    
    }
    
    static void displayb(){
        cout<<b<<endl; 
    }
    
    static void showa(){
        cout<<a<<endl;
    }
    
    void changea(){
        a++;
    }
};
int test :: a = 9;

int main() {
    
    test t1;
    t1.getb();
    t1.displayb();

    test t2;
    t2.displayb();
    

    return 0;
}