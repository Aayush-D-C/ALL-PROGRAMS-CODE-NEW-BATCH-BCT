//Character I/O with get() and put()

#include<iostream>
#include<ostream>
using namespace std;

int main(){
    char ch;
    int count;
    
    cout<<"Input"<<endl;
    
    cin.get(ch);
    while(ch!='\n'){
        cout.put(ch);
        count++;
        cin.get(ch);
    }
    
    cout<<endl<<"Counter: "<<count;
    return 0;
}