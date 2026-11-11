#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    int count = 0;
    while(num != 0){
        int digit = num%10;
        num = num/10;
        count++;
    }
    cout<<count;
    return 0;
}