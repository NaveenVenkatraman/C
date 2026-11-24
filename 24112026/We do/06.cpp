
#include <iostream>
#include <iomanip>
using namespace std;

class WaterTank {
    int capacity;
    int waterLevel;

    double calculatePercentage() {
    return (waterLevel * 100.0) / capacity;
}
public:
    void setDetails(int c, int w) {
        capacity = c;
        waterLevel = w;
    }

    void display() {
        double percentage = calculatePercentage();
        cout << fixed << setprecision(2);
        
        cout << "Fill " << percentage << "%" << endl;

        if (percentage < 25) {
            cout << "Refill required" << endl;
        }
    }
};

int main() {
    int capacity, waterLevel;

    cout << "Enter the tank capacity in litres: ";
    cin >> capacity;

    cout << "Enter the current water level in litres: ";
    cin >> waterLevel;

    WaterTank tank;
    tank.setDetails(capacity, waterLevel);
    tank.display();

    return 0;
}
