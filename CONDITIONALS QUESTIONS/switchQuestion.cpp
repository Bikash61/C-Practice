// Write a program to print the month of the year using switch statement 

#include <iostream>
using namespace std;

int main(){
    int month ; 
    cout << "Enter the month from 1 to 6 : ";
    cin>>month;


    switch (month){
        case 1 :
        cout << "January "<<endl;
        break;

        case 2 : 
        cout << "Feburary "<<endl; 
        break;

        case 3 : 
        cout << "March"<<endl;
        break;

        case 4:
        cout << "April"<<endl;
        break; 

        case 5:
        cout<< "May"<<endl;
        break;

        case 6:
        cout << "June"<<endl;
        break;

        default:
        cout << "Invalid Month"<<endl;
        break;
    }

    return 0;
}