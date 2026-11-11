#include <iostream>
using namespace std;

int main() {
    int total = 5000;
    int hours = total / 3600;
    int minutes = total % 3600 / 60;
    int seconds = total % 60;
    cout << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;
    return 0;
}
