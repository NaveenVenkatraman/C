#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the Number : ";
    cin>>num;
    if(num>0){
        num++;
        cout<<num;
    }
    else{
        cout<<num;
    }
    return 0;
}