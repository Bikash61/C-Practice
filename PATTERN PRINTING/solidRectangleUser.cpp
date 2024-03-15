#include <iostream>
using namespace std;

int main(){
    int row, column;
    cout<< "Enter the row you want";
    cin>>row;
    cout<<"Enter the column you want";
    cin>>column;

    for(int i = 1; i<=column; i++){
        for(int j = 1 ; j<=row ; j++){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}