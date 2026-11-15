
#include <iostream>
#include <string>
using namespace std;

int main() {

    string label = "CAT";

    // Insert
    label.insert(3, "S");
    cout << label << endl;

    // Erase
    label.erase(3, 1);
    cout << label << endl;

    // Replace
    label.replace(0, 1, "B");
    cout << label << endl;

    return 0;
}
