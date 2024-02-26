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
    if (a >b){
        if (a>c){
            cout << "A is greatest";
        }
    }
    if (b>a){
        if (b>c){
            cout << "B is greatest";
        }
    }
    if (c >a){
        if (c>b){
            cout << "C is greatest";
        }
    }
     return 0;
}