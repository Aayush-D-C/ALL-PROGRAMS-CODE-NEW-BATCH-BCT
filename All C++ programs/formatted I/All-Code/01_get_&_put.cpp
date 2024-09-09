#include <iostream>
using namespace std;

int main()
{
    char ch;
    int count = 0;

    cout << "Input" << endl;

    cin.get(ch); // Read the first character
    while (ch != '\n')
    {                          // Continue until newline
        cout.put(ch);          // Output the character
        count++;               // Increment the count
        cin.get(ch);           // Read the next character
    }

    cout << endl
         << "Counter: " << count; // Output the total count
    return 0;
}

// Important concept for this topic you might gets confused
/*
    In our program, the cout.put(ch) function is used to output each character one by one, and cin.get(ch) is used to read each character from the input. The reason cout.put(ch) might appear to display characters only after you finish entering the input (rather than in real-time) is due to buffering.

    Understanding Buffering
    Input Buffering: When you enter characters at the terminal, they are buffered until you press Enter. This means all the characters you type are held in an input buffer until a newline character ('\n') is encountered. Only then does the program process these characters one by one.

    Output Buffering: Similarly, output to the terminal is also buffered. By default, cout uses a buffer to store output data and flushes it (i.e., writes it to the terminal) at certain points. The buffer may be flushed when it is full, when you explicitly call cout.flush(), or when the program ends.

    But in this program we cannot show realtime beacuse no matter what we do the loop will exit if we enter a dilimter(default by newline), we cannot simply use cout.flush() and hope it will fix everything search for yourself how can u make it realtime :)
*/