// Print the sum of first natural number, where n is the input 
#include <iostream>
using namespace std; 
int main(){
    int i = 1; 
    int sum = 0;
    int  n ; 
    cout << "Enter the number of sum you want "<<endl;
    cin >> n ;

    while ( n >=i){
        sum +=i;
        i ++ ;
    }
    cout << sum ; 
}