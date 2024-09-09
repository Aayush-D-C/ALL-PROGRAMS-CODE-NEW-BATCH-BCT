// Write a program to write the information of 10 employees in a file. And display their 
// details on the console

//We can directly add everything in file after once writing instead u can write a single employee details at once
//CAution : You are already using a pointer to an array and while givin detail of single employee
//Try using reinterpret_cast operator this will change one data type to another howver use of reinterpret_case is
//prohibited due to it's limitaition on changining one type to another without checking if it possible or not.
//Research on your own

#include<iostream>
#include<fstream>
using namespace std;

class Employees{
    char name[30];
    int age;
    int salary;
    char address[30];

    public:
        void putData(){
                cout<<"Enter employee name: ";
                cin>>name;
                cout<<"Enter your age: ";
                cin>>age;
                cout<<"Enter salary: ";
                cin>>salary;
                cout<<endl;
        }

        void getData(){
                cout<<"Employee Name:"<<name<<endl;
                cout<<"Employee Age :"<<age<<endl;
                cout<<"Employee Salary :"<<salary<<endl<<endl;
        }
};


int main(){
    Employees *e1 = new Employees[10];
    fstream file;
    file.open("employee",ios::out | ios::binary);

    if(!file){
        cerr<<"Error: File cannot be created"<<endl;
        delete [] e1;
        return 1;
    }

    for(int i=0; i<2; i++){
        cout<<"Enter employee detail for employee["<<i+1<<"]"<<endl;
        e1[i].putData();
    }
    
    file.write((char *)e1, sizeof(e1));

    file.close();

    file.open("employee", ios::in);

    if(!file){
        cerr<<"Error: File cannot be opened"<<endl;
        delete [] e1;
        return 1;
    }

    file.read((char *)e1, sizeof(e1));

    for(int i=0; i<2; i++){
        cout<<"Employee detail for employee["<<i+1<<"]"<<endl;
        e1[i].getData();
    }

    delete[] e1;
    return 0;
}



//If we had used reinterpret cast

/*
    //To write in file using reinterpret_cast

    for (int i = 0; i < 10; i++) {
    cout << "Enter employee detail for employee[" << i + 1 << "]" << endl;
    e1[i].putData();

    // Write only relevant data to the file
    file.write(e1[i].name, sizeof(e1[i].name));
    file.write(reinterpret_cast<char*>(&e1[i].age), sizeof(e1[i].age));
    file.write(reinterpret_cast<char*>(&e1[i].salary), sizeof(e1[i].salary));
  }

---------------------------------------------------------------------------------------

    //To write in read file using reinterpret cast
   for (int i = 0; i < 10; i++) {
    cout << "Employee detail for employee[" << i + 1 << "]" << endl;

    // Read data and populate the object
    file.read(e1[i].name, sizeof(e1[i].name));
    file.read(reinterpret_cast<char*>(&e1[i].age), sizeof(e1[i].age));
    file.read(reinterpret_cast<char*>(&e1[i].salary), sizeof(e1[i].salary));

    e1[i].getData();
  }

*/