
#include <iostream>
using namespace std;

class GardenPlot {
    int length;
    int width;

public:
    void setDimensions(int l, int w) {
        length = l;
        width = w;
    }

    int calculatePerimeter() {
        return 2 * (length + width);
    }
};

int main() {
    int length, width;

    GardenPlot p1, p2;

    cout << "Enter the length of Plot 1 in metres: ";
    cin >> length;

    cout << "Enter the width of Plot 1 in metres: ";
    cin >> width;

    p1.setDimensions(length, width);

    cout << "Enter the length of Plot 2 in metres: ";
    cin >> length;

    cout << "Enter the width of Plot 2 in metres: ";
    cin >> width;

    p2.setDimensions(length, width);

    cout << "Plot 1 perimeter: " << p1.calculatePerimeter() << " metres" << endl;
    cout << "Plot 2 perimeter: " << p2.calculatePerimeter() << " metres" << endl;

    return 0;
}
