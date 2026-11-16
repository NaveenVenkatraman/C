/*
Prime Number
Problem Statement: A maths club awards a point when a student draws 
a prime-number card. Read one integer from −10000 to 10000. Write a 
function that returns true for a prime and false otherwise. In main, print 
Prime or Not prime. A prime is greater than 1 and has exactly two 
positive divisors.
Function to use: bool isPrime(int number);
Test Cases:
Input 1: 2
Output 1: Prime
Input 2: 21
Output 2: Not prime
Input 3: 1
Output 3: Not prime
Input 4: −7
Output 4: Not prime
*/

#include <iostream>
using namespace std;

bool isPrime(int number){
    if(number <=0){
        return false;
    }
    int count = 0;
    for(int i=2; i<number; i++){
        if(number%i==0){
            count++;
        }
    }

    if(count == 0){
        return true;
    }
    else{
        return false;
    }
   
}

int main(){
    int num; 
    cout<<"Enter the Number : ";
    cin>>num;
    bool result = isPrime(num);

    if(result){
        cout<<"Prime";
    }else{
        cout<<"Not prime";
    }
    return 0;
}