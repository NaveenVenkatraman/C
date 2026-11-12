#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the Num : ";
    cin>>num;

    do{
        cout<<num<<endl;
        num+=2;
    }while(num<=9);
    
    return 0;
}