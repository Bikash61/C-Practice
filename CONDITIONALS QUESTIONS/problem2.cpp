// Take three number input and check wheather it can be the side of the traingle
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the First side of the traingle" << endl;
    cin >> a;
    cout << "Enter the Second side of the traingle" << endl;
    cin >> b;
    cout << "Enter the Third side of the traingle" << endl;
    cin >> c;
    if ((a + b >= c) && (b + c >= a) && (c + a) >= b)
    {
        cout << "It can be the side of the traingle" << endl;
    }
    else
    {
        cout << "It can't be the side of the traingle" << endl;
    }

    return 0;
}
