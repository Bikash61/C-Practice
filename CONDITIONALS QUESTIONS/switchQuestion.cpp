#include <iostream>
using namespace std;

int main(){

    int month; 

    cout << "Enter the number of the month you want"<<endl;
    cin>>month;

    switch(month){

        case 1 : 
        cout << "January"<<endl;
        break;

        case 2:
        cout << "Feb"<<endl;
        break ;

        default:
        cout << "Invalid ";
        break;

    }
}