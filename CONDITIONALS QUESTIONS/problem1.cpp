// write a c++ code to input any character and check wheather it is alphabet digit or special character
#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter the character" << endl;
    cin >> ch;

    if ((ch >= 'a' && 'z' >= ch) || (ch >= 'A' && 'Z' >= ch))
    {
        cout << "It is an alphabet number" << endl;
    }
    else if (ch >= '0' && '9' >= ch)
    {
        cout << "It is a number" << endl;
    }
    else
    {
        cout << "It is a special character";
    }

    return 0;
}