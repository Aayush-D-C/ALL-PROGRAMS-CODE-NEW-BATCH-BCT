/*
    Enumeration a type of user defined datatype genrellay used for creating symbolic constants.
    Provides a way of attaching names to numbers.
*/


#include<iostream>
using namespace std;

enum switcher{off , on};

int main(){
    int choice;
    cout<<"Do you want to turn on the switch?:";
    cin>>choice;
    if(choice  == on){
        cout<<"Switch is turned ON"<<endl;
    }
    else{
        cout<<"Switch is turned OFF"<<endl;
    }
    return 0;
}