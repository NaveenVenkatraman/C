#include <iostream>
using namespace std;

int main() {
    int waterFilled = 15 * 8;
    int waterLeaked = 20;

    cout << "Water in the tank: " << waterFilled - waterLeaked
         << " litres" << endl;

    return 0;
}
