#include <iostream>
using namespace std;

void printArray(int arr[], int size){
     for (int i =0 ; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
int main(){
    


    
    //Initializing the array
    int secondArray[3] = {1,3,4};
    printArray(secondArray,3);


    int thirdArray[8] ={2,4,5,6,4,3};
    printArray(thirdArray,8);

    //Printing the Array
    int n = 8;
    printArray(thirdArray,n);
    cout<<endl;

    //Initializing every location 0 in an Array
    cout<<"Printing Array with 0 in every location"<<endl;
    int fourthArray[10] = {0};
    printArray(fourthArray,10);

    //Initilizating every location with 1 in an Array is not possible with below line
    cout<<endl<<"Printing Array with 1 in 1st location"<<endl;
    int fifthArray[10] = {1};
    printArray(fifthArray,10);

    //Initilizating every location with 1 in an array
    cout<<endl<<"Printing Array with 1 in every location"<<endl;
    int size = 10;
    int arr[size];

    for (int i =0; i<size; i++){
        arr[i] = 1;
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    int fifthsize = sizeof(fifthArray)/sizeof(int);
    cout<<fifthsize<<endl;

    cout<<"Everything is fine"<<endl;





    return 0;
}