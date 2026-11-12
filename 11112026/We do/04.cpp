#include <iostream>
using namespace std;

int main(){
    int pop = 5;
    int time = 0; 
    while(pop < 1000){
        time = time + 1;
        pop *=2;
    }
    cout<<"Time : "<<time<<endl;
    cout<<"Cells : "<<pop;
    return 0;
}