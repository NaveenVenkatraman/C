#include <iostream>
using namespace std;

int main(){
    int marks[5];
    int index[2];
    for(int i=0; i<5; i++){
        cout<<"Enter the Mark ";
        cin>>marks[i];
    }

    cout<<"{ ";

    for(int i=0; i<5; i++){
        cout<<marks[i]<<" ,";
    }

    cout<<" }\n";

    for(int i=0; i<2; i++){
        cout<<"Enter the Index ";
        cin>>index[i];
    }
    cout<<marks[index[0]]<<endl;
    cout<<marks[index[1]]<<endl;

    return 0;
}