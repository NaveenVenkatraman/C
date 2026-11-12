#include <iostream>
using namespace std;

int main(){
    int slots[5] = {10,20,30};
    int newTicket = 15;
    int indexTen;

    // reverse Order
     for(int i=4; i>=0; i--){
        cout<<slots[i]<<endl;
    }

    cout<<"--------------"<<endl;

    // find the index of 10
    for(int i=0; i<5; i++){
        if(slots[i] == 10){
            indexTen = i;
        }
    }

    cout<<"Index_Ten : "<<indexTen<<endl;


    cout<<"--------------"<<endl;

    for(int i=4; i>indexTen; i--){
        slots[i] = slots[i-1];
    }

    slots[indexTen + 1] = newTicket;

    for(int i=0; i<5; i++){
        cout<<slots[i]<<endl;
    }
   
    return 0;
}