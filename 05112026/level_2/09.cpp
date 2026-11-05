#include <iostream>
using namespace std;
int main(){
    int call_out_fee = 100;
    int tip_per_hours = 40;
    int total_hours = 3;
    cout<<"Total cost: "<<call_out_fee+tip_per_hours*total_hours<<" Rs"<<endl;
   
    return 0;
}