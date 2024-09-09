// Online C++ compiler to run C++ program online
//Example of local class

#include <iostream>
using namespace std;

        class sample{
          int a;
          static int checker;
          
          public:
          sample(int a =0){
              this-> a = a;
          }
          
          void getA(){
              cout<<"The value of a is :"<<a<<endl;
          }
            
            static void display(){
                checker += 1;
                cout<<checker<<endl;
            }  
        };
        
        int sample :: checker = 4;


int main() {
    // We can directly call static member function without making instance of class 
    //because static memeber fucntion is not linked with the single object but whole class
    sample :: display();
    sample s1(3);
    s1.getA();
    
    sample :: display();
    sample s2(3);
    s2.getA();
    return 0;
}