#include <iostream>
using namespace std;

int main() {
    int code = 7351;
    int sum = 0;
    sum = sum + code % 10;
    code = code / 10;
    sum = sum + code % 10;
    code = code / 10;
    sum = sum + code % 10;
    code = code / 10;
    sum = sum + code % 10;
    cout << "Sum of digits = " << sum << endl;
    return 0;
}
