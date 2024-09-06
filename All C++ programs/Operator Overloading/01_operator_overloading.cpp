#include<iostream>
using namespace std;

class example
{
   string name;
   int age;

   public:
    example(){
        name = " ";
        age = 0;
    }

    friend istream & operator >>(istream &input, example &e);
    friend ostream & operator <<(ostream &print, example &e);

};

ostream & operator<<(ostream &print, example &e){
    print<<"Name: "<<e.name<<endl;
    print<<"Age: "<<e.age<<endl;
    return print;
}

istream & operator>>(istream &input, example &e){
    input>>e.name;
    input>>e.age;
    return input;
}

int main(){
    example e1;
    cin>>e1;
    cout<<e1;
    return 0;
}