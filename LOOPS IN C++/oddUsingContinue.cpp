// Write a program to print odd number in a seies upto 50 using continue statement
#include <iostream>
using namespace std;
int main(){
    for( int i = 1; i<=30; i++){
        if (i%2 ==0){
            continue;
        }
        else{
            cout<< i<<endl;
        }
    }
}
