#include <iostream>
#include <string>
using namespace std;

int main() {
    string storedCode = "BOX7";
    string typedCode;

    cout << "Enter the stock code: ";
    cin >> typedCode;

    if (typedCode == storedCode) {
        cout << "Result: Match" << endl;
    }
    else {
        cout << "Result: Different" << endl;
    }

    return 0;
}