#include<iostream>
#include<fstream>
using namespace std;

class source{
        int age , salary;

    public:
        void setData(){
            cout<<"Enter your age:";
            cin>>age;
            cout<<"Enter your salary:";
            cin>>salary;
        }
};

class destination{
    int age , salary;
    static int count;

    public:
        void getData(){
            cout<<"["<<count+1<<"]Your salary is:"<<salary<<endl;
            cout<<"["<<count+1<<"]Your age is:"<<age<<endl;
        }
};

int destination :: count;

int main(){

    source s1;
    destination d1;
    fstream file;

    file.open("example", ios::out | ios::trunc);

    if(!file){
        cerr<<"Error opening file";
        return 1;
    }

    s1.setData();
    file.write((char *) & s1, sizeof(s1));
    file.close();

    file.clear();

    file.open("example",ios::in);
    
    if(!file){
        cerr<<"Error opening file";
        return 1;
    }

    file.read((char * )&d1 , sizeof(d1));
    d1.getData();
    file.close();
    return 0;
}