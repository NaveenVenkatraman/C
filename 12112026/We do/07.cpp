/*
Remove a cancelled ticket
Before a workshop starts, Bala learns that the participant holding ticket 
15 has cancelled. He finds the ticket in the second slot of the registration 
holder. The desk uses this holder to call participants in order, so Bala 
must close the gap before the next person is called.
The five-slot holder contains 10, 15, 20, and 30 in its first four slots.
What moves close the gap, and which tickets and used size should Bala 
report afterward?*/

#include <iostream>
using namespace std;

int main(){
   
    int slots[5] = {110, 15, 20,30};
    int fifteenth_index;
    int size=4;
    int cancelled_ticket = 15;

    for(int i=0; i<5; i++){
        if(slots[i]== cancelled_ticket){
            fifteenth_index = i;
        }
    }
    for(int i=fifteenth_index; i<5; i++){
            slots[i] = slots[i+1];
        }
    size--;

    for(int i=0; i<size; i++){
            cout<<slots[i]<<endl;
        }
    cout<<"Size : "<<size;
    
    return 0;
}