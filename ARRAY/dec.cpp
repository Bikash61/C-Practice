#include <iostream>
using namespace std;
int main(){
    //declaring an array
    int number[10] ;

    //Accessing an array
    cout<<"The value at 4 index is "<<number[2]<<endl;

    cout<<"The value at 20 index is "<<number[20]<<endl;

    cout<<"The value at 788 index is "<<number[788]<<endl;



    cout<<"Everything is fine"<<endl;
    //Initializing the array
    int secondArray[3] = {1,3,4};

    cout<<"The value of 2Nd index is "<<secondArray[2]<<endl;

    int thirdArray[8] ={2,4,5,6,4,3};
    cout<<"The value of 7th index is "<<thirdArray[7]<<endl;
    //Printing the Array
    int n = 8;
    for (int i = 0; i<n; i++){
        cout<<thirdArray[i]<<" ";

    }
    cout<<endl;

    //Initializing every location 0 in an Array
    cout<<"Printing Array with 0 in every location"<<endl;
    int fourthArray[10] = {0};
    int m = 10;
    for (int i =0 ; i<10; i++){
        cout<<fourthArray[i]<<" ";
    }

    //Initilizating every location with 1 in an Array is not possible with below line
    cout<<endl<<"Printing Array with 1 in every location"<<endl;
    int fifthArray[10] = {1};
    int a = 10;
    for (int i = 0; i<a; i++){
        cout<<fifthArray[i]<<" ";
    }





    return 0;
}