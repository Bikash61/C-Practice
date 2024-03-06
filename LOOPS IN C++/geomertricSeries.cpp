//Write a program to find the series 3,12,48,...................

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    for( int i = 0 ; i<=10 ; i+=2){
        cout << 3 *pow(2, i)<<endl;

    }

    

    return 0;
}