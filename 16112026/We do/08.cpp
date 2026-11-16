/*
Return the greatest of three scores
Problem Statement: Three teams submit scores. Pass all three to a 
function that returns the greatest score, including when teams tie. Use 
comparisons in the function.
Function to use: int greatestScore(int a, int b, int c);
Test Cases:
Input 1: 17, 25, 25
Output 1: 25
*/

#include <iostream>
using namespace std;

int greatestScore(int a, int b, int c){
    if(a>b){
        if(a>c){
            return a;
        }else{
            return c;
        }
    }else if(b>c){
        return b;
    }else{
        return c;
    }
}

int main(){
    int a,b,c;
    cout<<"Enter a, b, and c : ";
    cin>>a>>b>>c;

    cout<<"Greatest Score : "<<greatestScore(a,b,c);
    return 0;
}