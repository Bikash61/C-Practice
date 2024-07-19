#include <iostream>
using namespace std;


bool search(int arr[], int size , int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){

    int arr[10]= {10,2,-3,4,-2,8,-9,-4,-1,-13};
    //wheather 1 is present in it
    cout<<"Enter the key you want to search of an array:"<<endl;
    int key;
    cin>>key;
    bool ans = search(arr,10,key);
    if(ans){
        cout<<"The key is present in the array"<<endl;
    
    }else{
        cout<<"The key is Absent in the Array"<<endl;
    }


    
}