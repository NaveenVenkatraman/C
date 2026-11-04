#include <iostream>
using namespace std;

int main() {
    int eggs = 275;
    int eggsPerTray = 30;

    cout << "Full trays: " << eggs / eggsPerTray << endl;
    cout << "Eggs left over: " << eggs % eggsPerTray << endl;

    return 0;
}
