#include <iostream>
using namespace std;
int main(){
    
    int per_unit = 2;
    int next = 3;
    int total_usage = 250;

    int bill = (100*2) + (total_usage - 100) * 3;
    cout<<"Bill amount : "<<bill;


    return 0;
}