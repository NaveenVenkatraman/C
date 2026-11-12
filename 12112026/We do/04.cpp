#include <iostream>
using namespace std;

int main(){
    
    int measurements[5] = {18,21,19,22,20};
    int ravi_array[5];

    for(int i=0; i<5; i++){
        ravi_array[i] = measurements[i];
    }

    for(int i=0; i<5; i++){
        cout<<ravi_array[i]<<endl;
    }

    return 0;
}