#include <iostream>
using namespace std;

int main() {
    int students = 85;
    int teamSize = 6;
    int teams = students / teamSize;
    int left = students % teamSize;
    cout << "Full teams = " << teams << endl;
    cout << "Students left over = " << left << endl;
    return 0;
}
