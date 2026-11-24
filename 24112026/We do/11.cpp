



#include <iostream>
using namespace std;

class EquipmentCheckout {
    private:
        string equipment_name;

    public:
        EquipmentCheckout(string name) {
            equipment_name = name;
            cout << "Checked out: " << equipment_name << endl;
        }

        ~EquipmentCheckout() {
            cout << "Returned: " << equipment_name << endl;
        }
};

int main() {
    string name;

    cout << "Enter the equipment name: ";
    cin >> name;

    {
        EquipmentCheckout e1(name);

        cout << "Practical session in progress" << endl;
    }

    cout << "Checkout record closed" << endl;

    return 0;
}
