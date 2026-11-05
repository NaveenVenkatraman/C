#include <iostream>
using namespace std;
int main(){
    int mark = 88;
    int attendance = 72;
    bool isEligible = mark>85 || attendance > 90;

    cout<<isEligible;

    return 0;
}