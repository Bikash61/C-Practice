// Take three positive integer and print the greatest of them
#include <iostream>
using namespace std;

int main()
{

    int a, b, c;

    cout << "Enter First digit number " << endl;
    cin >> a;
    cout << "Enter Second digit number " << endl;
    cin >> b;
    cout << "Enter Third digit number " << endl;
    cin >> c;
    if (a > b and a >c)
    {
        cout << a << " is greater";
    }
    else if (b > c and b>a)
    {
        cout << b << " is greater";
    }
    else if ( c > a and c > b)
    {
        cout << c<< " is greater";
    }
    return 0;
}