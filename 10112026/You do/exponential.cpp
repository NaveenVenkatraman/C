#include <iostream>
using namespace std;

int main(){
    int base;
    int exponent;
    cout<<"Enter the base : ";
    cin>>base;
    cout<<"Enter the exponent : ";
    cin>>exponent;
    int result = 1;
    
    for(int i = 0; i<exponent; i++){
        result*=base;
    }

    cout<<result;

    return 0;
}