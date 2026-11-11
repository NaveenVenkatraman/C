#include <iostream>
using namespace std;

int main() {
    int students = 1430;
    int perBus = 50;
    int buses = students / perBus;
    int left = students % perBus;
    cout << "Full buses = " << buses << endl;
    cout << "Students without a seat = " << left << endl;
    return 0;
}
