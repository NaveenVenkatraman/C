#include <iostream>
using namespace std;

int main() {
    int stock = 30;
    int sold = stock-- - 4;
    int left = --stock + sold;
    cout << "stock = " << stock << endl;
    cout << "sold = " << sold << endl;
    cout << "left = " << left << endl;
    return 0;
}
