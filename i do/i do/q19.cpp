#include <iostream>
using namespace std;

int main() {
    int token = 407;
    int first = token % 10;
    int second = token / 10 % 10;
    int third = token / 100;
    int reversed = first * 100 + second * 10 + third;
    cout << "Reversed token = " << reversed << endl;
    return 0;
}
