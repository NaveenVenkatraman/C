#include <iostream>
using namespace std;

int main(){
    int lockers[5] = {14, 27, 31, 27,42};

    int search;
    cout<<"Enter the Search : ";
    cin>>search;
    bool isFound = true;

    for(int i=0 ; i<5; i++){
        if(lockers[i] == search){
            cout<<"Found at index : "<<i<<endl;
            isFound = false;
            break;
        }
    }
    if(isFound){
        cout<<"Not Found..";
    }
   
    return 0;
}