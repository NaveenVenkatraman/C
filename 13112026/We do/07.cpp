#include <iostream>
using namespace std;

int main(){
    int records[5];
     cout<<"Enter the value : ";
    for(int i=0; i<5; i++){
       
        cin>>records[i];
    }

    int target;
    cout<<"Enter the target : ";
    cin>>target;
    bool flag = true;

    for(int i=0; i<5;i++){
        if(records[i]==target){
            cout<<1;
            flag = false;
            break;
        }
    }
    if(flag){
        cout<<"-1";
    }
    return 0;
}