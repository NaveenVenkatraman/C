#include <iostream>
using namespace std;

int main(){
    int group[100];
    int value;
    cout<<"Enter the value : ";
    cin>>value;
  

    for(int i=1; i<=value; i++){
        if(value%i==0){
            group[i]=i;
        }
    }


    
    
    
    return 0;
}