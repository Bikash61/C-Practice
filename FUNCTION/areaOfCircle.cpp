#include <iostream>
using namespace std;

float area(float radius){
    return 3.14 * radius * radius;

}
int main(){
    int n;
    cin >>n;
    cout<< area(n);

}