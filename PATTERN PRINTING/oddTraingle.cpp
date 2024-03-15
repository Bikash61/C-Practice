#include <iostream>
using namespace std;

int main(){
    for(int i = 1 ; i<=9 ; i+=2){
        for(int j =1 ; j<=i ; j++){
            if( j% 2 == 0){
                continue ;
            }
            cout<< j;
        }
        cout << endl;
    }

    return 0;
}