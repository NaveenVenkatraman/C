/*
D20. A game starts with score = 40. Then these statements run: int bonus = score++ + 5; and int 
total = ++score * 2;. Find the final values of score, bonus and total.
*/
#include <iostream>
using namespace std;

int main(){
    int score =40;
    int bonus = score++ + 5;
    int total = ++score * 2;

    cout<<"Score : "<<score<<endl; // 41 => 42 
    cout<<"Bonus : "<<bonus<<endl;  // 45;
    cout<<"Total : "<<total<<endl;  // 42*2 => 84
    return 0;
}