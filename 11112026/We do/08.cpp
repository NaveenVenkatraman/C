#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the Number : ";
    cin>>num;
    int reverse =0;
    int copy = num;

    while(num!=0){
        int digit = num%10;
        reverse = reverse*10 + digit;
        num /= 10;
    }

    cout<<reverse<<endl;
    cout<<copy<<endl;

    if(copy == reverse){
        cout<<"Palindrome ";
    }
    else{
        cout<<"Not Palindrome ";
    }

    return 0;
}