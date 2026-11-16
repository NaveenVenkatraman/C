/*
Say hello by name
Problem Statement: At a workshop, a student types their full name on 
one line. Read it with std::getline in main and pass it to a function that 
prints a greeting.
Function to use: void sayHello(std::string name);
Test Cases:
Input 1: Meena Ravi
Output 1: Hello, Meena Ravi!

*/

#include <iostream>
using namespace std;

void sayHello(string name){
    cout<<"Hello, "<<name;
}


 int main(){
    string name;
    cout<<"Enter the Name : ";
    getline(cin,name);
    sayHello(name);
    return 0;
 }