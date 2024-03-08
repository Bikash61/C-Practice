#include <iostream>
using namespace std; 
int main(){
    int num , digit , count = 0;
    cout <<"Enter the number"<<endl;
    cin>>num;
    while( num !=0){
        digit = num % 10 ;
        count += digit;
        num /=10;
    }
    cout << count <<endl;
    return 0 ;
}