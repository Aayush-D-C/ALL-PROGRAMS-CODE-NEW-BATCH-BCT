#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;

class example{
    char name[30];
    int ecode;

    public:
        example(){}

        example(char * n,int ec){
            strcpy(name,n);
            ecode = ec;
        }   
};

int main(){
    example e[4];
    e[0] = example("Aayush", 1);
    e[1] = example("Dinesh", 2);
    e[2] = example("Siddhartha", 3);
    e[3] = example("Ansh", 4);
    fstream file;
    file.open("example",ios::out | ios::in);

    for(int i=0; i<4; i++){
        file.write((char *)&e[i] , sizeof(e[i]));
    }

    file.seekg(0, ios::end);
    int end = file.tellg();
    
    cout<<"No of objects stored in the file:"<<end/sizeof(example);
    file.close();
    return 0;
}