#include <iostream>
using namespace std;
int main(){

    int num, first = 0 , second  = 1, next;
    cout<< "Enter the number you want upto where it need to print"<<endl;
    cin>> num;

    for (int i = 0 ; i <=num; ++i){
        if (i<=1){
            next = i;
        }else{
            next = first + second;
            first = second;
            second = next;
        }
        next+=i;
        cout<< next<<" ";

    }
}