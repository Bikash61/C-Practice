// WAP to print the day in a week by using switch statement 

#include <iostream>
using namespace std;
int main(){

    int week;
    cout << "Enter the number of a week that you want to print from 1 to 7: ";
    cin>> week ; 

    switch (week){

        case 1 : 
        cout <<"Sunday"<<endl;
        break; 

        case 2: 
        cout << "Monday"<<endl;
        break;

        case 3:
        cout << "Tuesday"<<endl;
        break;

        case 4:
        cout<<"Wednesday"<<endl;
        break;

        case 5:
        cout<<"Thursday"<<endl;
        break;

        case 6:
        cout << "Friday"<<endl;
        break;

        case 7:
        cout<<"Saturday"<<endl;
        break;

        default:
        cout<< "Invalid Day"<<endl;
        break;
    }

    return 0;
}