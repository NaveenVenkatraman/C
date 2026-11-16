/*
Greet a student
Problem Statement: At registration, a student types their full name. Read 
it with std::getline and pass it to a function that displays a greeting.
Function to use: void greet(std::string name);
Test Cases:
Input 1: Arun Kumar
Output 1: Hello, Arun Kumar!
*/

#include <iostream>
using namespace std;

void greet(string name){
    cout<<"Hello, "<<name;
}

int main(){
    string name;
    cout<<"Enter Your Name : ";
    getline(cin,name);
    greet(name);
    return 0;
}