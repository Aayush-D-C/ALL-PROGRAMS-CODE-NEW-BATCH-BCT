// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class complex{
  int real;
  int imaginary;
  static int count;
  
  public:
  void getData();
  void setData();
  complex sumComplex(complex, complex);
};

int complex:: count;

void complex :: getData(void){
    cout<<"Enter the real part for "<<count+1<<" number:";
    cin>>real;
    
    cout<<"Enter the imaginary part for "<<count+1<<" number:";
    cin>>imaginary;
    cout<<endl;
    count++;
}

void complex :: setData(){
    cout<<"The complex number is :"<<real<<"+i"<<imaginary<<endl;
}

complex complex :: sumComplex(complex c1,complex c2){
    complex temp;
    temp.real = c1.real + c2.real;
    temp.imaginary = c1.imaginary + c2.imaginary;
    return temp;
}

int main() {
    
    complex c1,c2,c3,c4;
    //input complex numbers
    c1.getData();
    c2.getData();
    
    c3 = c3.sumComplex(c1,c2);
    c3.setData();
    return 0;
    
}