#include <iostream>
#include <string>
using namespace std;

int main() {
    string teamCode;

    cout << "Enter the team code: ";
    cin >> teamCode;

    cout << "\nTeam Code: " << teamCode << endl;
    cout << "Index and Characters:" << endl;

    for (int i = 0; i < teamCode.length(); i++) {

        cout << "Index: " << i
             << " | Character: " << teamCode[i] << endl;

    }

    return 0;
}