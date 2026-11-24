
#include <iostream>
using namespace std;

class RechargePlan {
    private:
        string name;
        int price;
        int validity;

    public:
        
        RechargePlan(string n, int p, int v) {
            name = n;
            price = p;
            validity = v;
        }

        void display() {
            cout << name << " Rs " << price << " "
                 << validity << " days" << endl;
        }
};

int main() {
    string name;
    int price, validity;

    cout << "Enter the name of Plan 1: ";
    cin >> name;

    cout << "Enter the price in rupees for Plan 1: ";
    cin >> price;

    cout << "Enter the validity in days for Plan 1: ";
    cin >> validity;

    RechargePlan plan1(name, price, validity);

    cout << "Enter the name of Plan 2: ";
    cin >> name;

    cout << "Enter the price in rupees for Plan 2: ";
    cin >> price;

    cout << "Enter the validity in days for Plan 2: ";
    cin >> validity;

    RechargePlan plan2(name, price, validity);

    plan1.display();
    plan2.display();

    return 0;
}
