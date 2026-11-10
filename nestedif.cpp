#include <iostream>
using namespace std;

int main(){
    int b1,b2,b3;
    cout<<"Enter b1 : ";
    cin>>b1;
    cout<<"Enter b2 : ";
    cin>>b2;
    cout<<"Enter b3 : ";
    cin>>b3;;

    if(b1>b2){
        if(b1>b3){
            cout<<"b1 is Greater..";
        }
        else{
            cout<<"b3 is Greater..";
        }
    }else if(b2 > b3){
        cout<<"b2 is Greater..";
    }
    else{
        cout<<"b3 is Greater..";
    }
    return 0;
}