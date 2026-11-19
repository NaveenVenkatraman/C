#include <iostream>
using namespace std;
int main(){
    int age = 17;
    bool licence = true;
    bool isRide = age>10 || licence ;
    cout<<isRide;
    
    return 0;
}