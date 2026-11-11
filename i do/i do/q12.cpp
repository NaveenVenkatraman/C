#include <iostream>
using namespace std;

int main() {
    int pens = 500;
    int perBox = 12;
    int boxes = pens / perBox;
    int left = pens % perBox;
    cout << "Full boxes = " << boxes << endl;
    cout << "Pens left over = " << left << endl;
    return 0;
}
