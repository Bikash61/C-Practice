//Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all threepoints ?all on one straight line.
#include<iostream>
using namespace std;

int main (){
    int x1,x2,x3,y1,y2,y3,m1,m2;
    
    cout << "Enter the value of x1"<<endl;
    cin >>x1;
    cout << "Enter the value of x2"<<endl;
    cin >>x2;
    cout << "Enter the value of x3"<<endl;
    cin >>x3;
    cout << "Enter the value of y1"<<endl;
    cin >>y1;
    cout << "Enter the value of y2"<<endl;
    cin >>y2;
    cout << "Enter the value of y3"<<endl;
    cin >>y3;

    m1 = (y2-y1)/(x2-x1);
    m2 = (y3-y2)/(x3-x2);

    if (m1 == m2){
        cout << "Hey ! This line is a staright line";
    }
    else{
        cout << "Well! Not a staright bro ";
    }

    return 0;

}