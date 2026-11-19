/*
Problem Statement: Given a temperature in Celsius, determine
the equivalent temperature in Fahrenheit. Formula: Fahrenheit = (Celsius*/


#include <iostream>
using namespace std;

int main() {
    int celsuis;
    cout<<"Enter the clesuis : ";
    cin>>celsuis;
    cout<<"Fahrenheit : "<<(float)((celsuis*9/5)+32)<<" F";

    return 0;
}
