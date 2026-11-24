#include <iostream>
using namespace std;

class Bus{
    int seats;

    public:
    Bus(int seats){
        this->seats = seats;
    }

    void booking(int num){
        this->seats -= num;
    }

    int getSeats(){
        return this->seats;
    }
};

int main(){
    int b1,b2,booking;
    cout << "Enter the available seats for Bus 1 : ";
    cin >> b1;
    cout << "Enter the available seats for Bus 2 : ";
    cin >> b2;
    cout<< "Enter the number of seats to book on Bus 1 : ";
    cin >> booking;

    Bus bus1(b1);
    Bus bus2(b2);



    bus1.booking(booking);

    cout<<"Bus 1 available "<<bus1.getSeats()<<endl;
    cout<<"Bus 2 available "<<bus2.getSeats()<<endl;

    return 0;
}