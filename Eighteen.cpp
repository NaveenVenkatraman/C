#include <iostream>
using namespace std;

int main() {
    int code = 4827;
    int digitSum = code / 1000
                 + (code / 100) % 10
                 + (code / 10) % 10
                 + code % 10;

    cout << "Sum of digits: " << digitSum << endl;

    return 0;
}
