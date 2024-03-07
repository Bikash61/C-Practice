//Write a program to count digit of a given number 
#include <iostream>
using namespace std;
int main(){
    int number,count;
    cout <<"Enter the number"<<endl;
    cin>> number; 
    count =0;

    while (number !=0 ){
        number/=10;
        ++count;
    }

    cout << "Your digit is of "<<count;
}