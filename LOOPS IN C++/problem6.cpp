//Write a program to check wheather the number is prime or not 
#include <iostream>
using namespace std;
int main(){
    int n , count =0, i ;
    cout << "Enter the number "<<endl;
    cin >> n;
    i = 1;
    while ( i <=n){
        if ( n %i==0){
            count ++;

        }
        i++;
        
    }
    if ( count == 2){
        cout <<"It is a prime number";
    
    }else{
        cout << "It is not a prime number";
    }



    


    return 0;
}