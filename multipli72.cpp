#include <iostream>
using namespace std;

int main(){
    for(int i=0; i<31; i++){
        if(i%2!=0 && i%7!=0){
            cout<<i<<endl;
            cout<<"Print Completed.."<<endl;
        }
    }
    return 0;
}