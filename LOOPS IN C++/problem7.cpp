#include <iostream>
using namespace std;
int main(){
    int i , n , count = 0 ;
    i = 1;

    cout << "Enter the number n "<<endl;
    cin>>n;

    while ( n>=i){
        if ( n % i == 0){
            count ++;
        }
        i ++;
    }
    if (count >2){
        cout <<"It is a Composite number";
    }else{
        cout<<"It is not a composite number";
    }

}