#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int ans = 0;

    while (x != 0)
    {
        int digit = x % 10;
        if((ans > INT32_MAX)||( ans<INT32_MIN)){
            return 0;
        }
        ans = ans * 10 + digit;
        x = x / 10;
    }
    cout<< ans;
    return 0;
}