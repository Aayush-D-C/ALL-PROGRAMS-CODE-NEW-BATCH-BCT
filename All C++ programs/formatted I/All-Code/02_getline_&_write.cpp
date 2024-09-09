#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int size = 20;
    string u_comment;
    char comment[size];

    cout << "Enter your comment (string type):" << endl;
    getline(cin, u_comment);

    cout << "Enter your comment (up to 19 characters):" << endl;
    cin.getline(comment, size);

    //There is no write function like this ike getline(cin,<stringtype>);
    // cout<<"Your comment"<<endl;
    // write(cout,u_comment);

    cout<<"Your comment"<<endl;
    cout.write(comment,strlen(comment));
    return 0;
}