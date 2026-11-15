
#include <iostream>
#include <string>
using namespace std;

int main() {

    string code;
    string description;

    cin >> code;

    // cin.ignore();

    getline(cin, description);

    cout << code << endl;
    cout << description << endl;

    return 0;
}
