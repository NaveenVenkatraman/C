#include <iostream>
#include <string>
using namespace std;

int main() {
    string word = "MANGO";

    cout << "Word: " << word << endl;

    cout << "Length: " << word.length() << endl;
    cout << "First character: " << word[0] << endl;
    cout << "Character at index 2: " << word[2] << endl;

    cout << "Last valid index: " << word.length() - 1 << endl;

    cout << "Character at index 5: ";

    try {
        cout << word.at(5) << endl;
    }
    catch (const out_of_range& e) {
        cout << "Error: Index is out of range!" << endl;
    }

    return 0;
}