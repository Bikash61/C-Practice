//Display the A.P. 1,3,5,9,5 to n terms 
#include <iostream>
using namespace std;
int main(){
    int n,d;
    cout <<"Enter the tern n";
    cin>> n;
    for( int i = 1;  i <=n; i++ ){
       cout << ((2*i)-1)<<endl;

    }
    return 0; 
}