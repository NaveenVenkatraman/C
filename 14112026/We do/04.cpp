#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int spaceCount = 0;

    cout << "Enter the student's full name: ";
    getline(cin, name);

    for (int i = 0; i < name.length(); i++) {

        if (name[i] == ' ') {
            spaceCount++;
        }

    }

    cout << "\nStudent Name: " << name << endl;
    cout << "Number of spaces: " << spaceCount << endl;

    return 0;
}