/*
. A lamp panel uses the numbers a = 5 (binary 0101) and b = 9 (binary 1001). Find a & b, a | b and a ^ 
b.*/

#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 9;

    cout << "a & b : " << (a & b) << endl;
    cout << "a | b : " << (a | b) << endl;
    cout << "a ^ b : " << (a ^ b) << endl;

    return 0;
}


//0101
//1001