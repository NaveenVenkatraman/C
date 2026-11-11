#include <iostream>
using namespace std;

int main() {
    int amount = 4860;
    int n500 = amount / 500;
    amount = amount % 500;
    int n100 = amount / 100;
    amount = amount % 100;
    int n50 = amount / 50;
    amount = amount % 50;
    int n10 = amount / 10;
    cout << "500 notes = " << n500 << endl;
    cout << "100 notes = " << n100 << endl;
    cout << "50 notes = " << n50 << endl;
    cout << "10 notes = " << n10 << endl;
    return 0;
}
