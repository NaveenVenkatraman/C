#include <iostream>
#include <string>
using namespace std;

int main() {

    string flower;

    cout << "Enter the flower label: ";
    getline(cin, flower);

    flower.insert(0, "fresh ");

    cout << "\nAfter insert: " << flower << endl;

    flower.erase(6, 4);

    cout << "After erase: " << flower << endl;

    flower.replace(6, 4, "lily");

    cout << "After replace: " << flower << endl;

    return 0;
}