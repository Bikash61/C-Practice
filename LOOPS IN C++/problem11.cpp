//Print the table of N where n is the input from the user 
#include <iostream>
using namespace std;
int main(){
    int n ; 
    cout <<"Enter the number "<<endl;
    cin>> n;
    for(int i = 1; i<=10;   i++){
        cout <<  n<< "*" <<i <<"="<< (n*i)<<endl;

    }
    return 0;

}