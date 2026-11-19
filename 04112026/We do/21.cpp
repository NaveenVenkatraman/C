/*D21. A year is a leap year if it is divisible by 4 and not by 100, or if it is divisible by 400. Write the 
condition for the year 2024 and evaluate it step by step.
*/

#include <iostream>
using namespace std;

int main() {
    int year = 2024;
    if((year%4==0 && year%100!=0) || year%400 ==0){
        cout<<"Leap Year";
    }else{
        cout<<"Not Leap Year";
    }

    return 0;
}
