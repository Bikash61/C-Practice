//print the sum of  1st natural number by using for loop.
#include <iostream>
using namespace std;
int main (){
    int n ;
    int sum = 0;
    cout << "Enter the number for n"<<endl;
    cin>>n;
    int i = 0;
    for ( ; i<=n; i++){
        sum+=i;
    }

    cout <<sum;
return 0 ; 
}