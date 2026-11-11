#include <iostream>
using namespace std;

int main() {
    int total = 250;
    int issued = 63;
    int onShelf = total - issued;
    cout << "Books on the shelf = " << onShelf << endl;
    return 0;
}
