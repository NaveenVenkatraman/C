/*
Preview a score bonus
Problem Statement: A quiz teacher wants to preview a five-point bonus 
while keeping the original score. Read a score from 0 to 100. Pass it by 
value to addBonus, increase the copy by 5 and return the preview. Print 
the original score followed by the preview.
Function to use: int addBonus(int score);
Test Cases:
Input 1: 40
Output 1: 40 45
Input 2: 0
Output 2: 0 5
*/

#include <iostream>
using namespace std;

int addBonus(int score){
    return score+5;
}


int main()
{
    int score;
    cout<<"Enter the score : "<<endl;
    cin>>score;
    cout<<score<<" ";
    cout<<addBonus(score);

}

