#include <iostream>
using namespace std;

int main(){
    int rows , columns;
    cout << "Enter the number of columns you want"<<endl;
    cin>> rows;
    cout << "Enter the number of rows you want"<<endl;
    cin>>columns;

    for ( int i = 0; i<rows ; ++i){
        for (int j = 0 ; j<columns ;  ++j){
            cout << "*";
        }
        cout<< " "<<endl;
    }
    return 0;
}