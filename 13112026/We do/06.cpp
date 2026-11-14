#include <iostream>
using namespace std;

int main(){
    int records[5];
    for(int i=0; i<5; i++){
        cout<<"Enter the value : ";
        cin>>records[i];
    }

    int replacement;
    cout<<"\nEnter the replacemnt : ";
    cin>>replacement;

    int index;
    cout<<"\nEnter the index : ";
    cin>>index;

    records[index] = replacement;

    for(int i=0; i<5;i++){
        cout<<records[i]<<" ";
    }
    return 0;
}