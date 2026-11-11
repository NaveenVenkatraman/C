#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    int sum = 0 ;
    int count = 1;
    int pv = 0;
    for(int i =0 ; i<=num; i++){
        sum = pv + count;
        pv = sum;
        count++;
    }
    cout<<sum;
    return 0;
}