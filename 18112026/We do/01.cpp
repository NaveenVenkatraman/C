/*
Read a score through a pointer
Problem Statement: A quiz scorer enters a mark from 0 to 100. Store it in 
score. Initialise an int pointer with &score and print the mark through the 
pointer. On the next line print Same address if the pointer equals &score.
Test Cases:
Input 1: 42
Output 1: 42 / Same address
Input 2: 0
Output 2: 0 / Same address
*/

#include <iostream>
using namespace std;

int main(){
    int score = 100;
    cout<<"Score Address : "<<&score<<endl;
    int *ptr = &score;

    cout<<"Ptr Address "<<ptr<<" Value is "<<*ptr;
    return 0;
}