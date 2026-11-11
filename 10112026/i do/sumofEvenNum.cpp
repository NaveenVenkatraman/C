#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the num : ";
    cin>>num;
    int even_sum = 0;
    for(int i = 0 ; i<=num; i++){
        if(i%2==0){
            even_sum+=i;
        }
    }
    cout<<"Even Sum : "<<even_sum;
    return 0;

}