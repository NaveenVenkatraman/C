#include <iostream>
using namespace std;

int main() {
    int totalMinutes = 200;
    int hours = totalMinutes / 60;
    int minutes = totalMinutes % 60;
    cout << hours << " hours and " << minutes << " minutes" << endl;
    return 0;
}
