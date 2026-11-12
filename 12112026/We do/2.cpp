#include <iostream>
using namespace std;

int main(){
    int attendance_entry[5] ={28,31,26,30,29};
    attendance_entry[2] = 32;

    for(int i=0 ; i<5; i++){
        cout<<"Day "<<i<<" "<<attendance_entry[i]<<endl;
    }
   
    return 0;
}