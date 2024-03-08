# include <iostream>
using namespace std;

int main(){
    int num , count = 0 , digit ; 

    cout<< "Enter the number : ";
    cin >> num;

    
    while ( num !=  0 ){
        digit = num%10;
        count = count * 10+ digit;
        num/=10;
    }
    cout << count<<endl;

    return 0;
}


