#include <iostream>
using namespace std;
int main(){
    int day;
    cout<< "Enter the day you want to print?"<<endl;
    cin>>day;

    switch(day){
        case 1:
        cout << "This is a Sunday"<<endl;
        break;
        case 2:
        cout << "This is a Monday"<<endl;
        break;
        case 3:
        cout << "This is a Tuesday"<<endl;
        break;
        case 4:
        cout << "This is a Wednesday"<<endl;
        break;
        case 5:
        cout << "This is a Thursday"<<endl;
        break;
        case 6:
        cout << "This is a Friday"<<endl;
        break;
        case 7:
        cout << "This is a Saturday"<<endl;
        break;
        default:
        cout << "Invalid day"<<endl;

    }
}