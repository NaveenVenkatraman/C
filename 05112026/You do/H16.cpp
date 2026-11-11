#include <iostream>
using namespace std;

int main()
{
    int age = 10;
    bool hasCard = true;
    bool canBorrow;
    canBorrow = age >= 12 && hasCard;
    cout <<canBorrow <<endl;
    return 0;
}
