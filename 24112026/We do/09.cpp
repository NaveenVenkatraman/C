#include <iostream>
using namespace std;

class ParkingLot{
    int capacity;
    int occupied_count;

    public:
    ParkingLot(){
        this->capacity = 20;
        this->occupied_count = 0;
        cout << "Standard Capacity "<<this->capacity <<endl;
        cout << "Occupied "<<this->occupied_count <<endl;
    }
    ParkingLot(int value){
        this->occupied_count = 0;
        this->capacity = value;
        cout << "Custom Capacity "<<this->capacity <<endl;
        cout << "Occupied "<<this->occupied_count <<endl;
    }
};

int main(){
    int num;
    cout << "Enter the custom parking capacity: " ;
    cin >> num;
    ParkingLot p;
    ParkingLot p1(num);
    return 0;
}