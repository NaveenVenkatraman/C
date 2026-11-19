#include <iostream>
using namespace std;

int main(){
    int records[6];
     cout<<"Enter the value : ";

    for(int i=0; i<6; i++){
        cin>>records[i];
    }

    int target;
    cout<<"Enter the target : ";
    cin>>target;
    int count =0;
    bool flag = true;

    for(int i=0; i<6;i++){
        if(records[i]==target){
            cout<<i<<" ";
            count++;
            flag = false;
        }
    }

    if(flag){
        cout<<"No Matches \n";
    }

    cout<<"Count : "<<count;
    
    return 0;
}