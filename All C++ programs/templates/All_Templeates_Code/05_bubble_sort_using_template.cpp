#include<iostream>
using namespace std;

template<class X>
void bubble(X a[],int size){
    for(int i=0; i<10; i++){
    for(int j=9; i<j; j--){
        if(a[j]<a[j-1]){
            swap(a[j],a[j-1]);
        }
    }
}
}

template<class T1>
void swap (T1 & a, T1 & b){
    T1 temp = a;
    a = b;
    b = temp;
}

int main(){

    int a[10] = {4,10,11,45,28,0,1,9,2,3};
    int size = 10;
    bubble(a,size);

    cout<<"After sorting:";
    for(int i=0; i<10; i++){
        cout<<endl<<a[i]<<endl;
    }
return 0;
}