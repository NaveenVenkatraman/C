/*Swap Two Numbers
Problem Statement: Given two numbers, you need to Swap
two numbers using an additional variable. Example:
Given input is:
A = 5, B = 9
Calculation:
Use temp = A → temp = 5
A = B → A = 9
B = temp → B = 5
Output: After Swap: A
*/

#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b =9;
    int temp;
    
    cout<<"Before swaping : "<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

    temp = a;
    a =b;
    b = temp;

    cout<<"After swaping : "<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

    return 0;
}
