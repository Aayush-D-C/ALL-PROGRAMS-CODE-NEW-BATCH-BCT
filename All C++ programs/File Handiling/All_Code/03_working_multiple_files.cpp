//Before begining let's go through a function called getline() a very powerful and handy function
// Refer AboutGetline text file
/*
 Remeber this concept:

 Key Points:

    >getline reads until it encounters the delimiter (default is newline).
    >It's efficient for reading entire lines, including spaces and special characters.
    >You can customize the delimiter if needed.
    >Always check for file opening errors before using getline.
    >Remember to close the file after reading.
    
    
    Additional Considerations:

        For large files, consider using std::stringstream for further processing of the read line.
        If you need to read specific data types from the line, you can use string manipulation or parsing techniques.
        By understanding and effectively using getline, you can efficiently handle text-based data in your C++ programs.
*/
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;


int main()
{
    //Writing in files
    ofstream fout;
    fout.open("Country");
    fout<<"United States of America"<<endl;
    fout<<"Nepal"<<endl;
    fout<<"South Korea"<<endl;
    fout<<"India"<<endl;
    fout.close();

    fout.open("Capital");
    fout<<"Washington DC"<<endl;
    fout<<"Kathmandu"<<endl;
    fout<<"Seoul"<<endl;
    fout<<"New Delhi"<<endl;
    fout.close();

    //Reading the files
    string line;

    ifstream fin;
    fin.open("Country");
    cout<<endl<<"Contents of Country file"<<endl;
    while(fin){                           //---->> Checks EOF(End of file)
        getline(fin,line);  //Reads a line
        cout<<line<<endl;              //Displays it
    }
    fin.close();

    fin.open("Capital");
    cout<<endl<<"Contents of Capital file"<<endl;
    while(fin){                           //---->> Checks EOF(End of file)
        getline(fin,line);  //Reads a line
        cout<<line<<endl;              //Displays it
    }
    fin.close();

    return 0;
}