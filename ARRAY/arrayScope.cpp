#include <iostream>
using namespace std;

void update(int arr[],int n){

    cout<<"Inside the function"<<endl;
    arr[0] = 123;

    //Printing the array

    for(int i =0; i<3; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;


    cout<<"Going back to main"<<endl;

}
int main(){
    int arr[3] = {1,2,6};
    update(arr,3);

    //Printing the array

    for(int i =0; i<3; i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}