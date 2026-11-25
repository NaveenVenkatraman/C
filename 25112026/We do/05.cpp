#include <iostream>
using namespace std;

class Vehicle{
    int id;

    public:
        Vehicle(int id){
            this->id = id;
        }
        int getId(){
            return this->id;
        }
};

class Bus : public Vehicle{
    int seatCount;
    public:
    Bus(int seatCount,int id) : Vehicle(id){
        this->seatCount = seatCount;
    }
    void display(){
        cout << "Bus "<< this->seatCount <<" : "<<getId() << " Seats"<<endl;
    }
};

class Van : public Vehicle{
    int payLoad;
    public:
    Van(int payLoad,int id) : Vehicle(id){
        this->payLoad  = payLoad;
    }

     void display(){
        cout << "Van "<< this->payLoad  <<" : "<<getId()<< " Kg" <<endl;
    }
};

int main(){
    int busID, seatCount;
    int vanID, payload;

    cout << "Enter the bus ID: ";
    cin >> busID;

    cout << "Enter the seat count: ";
    cin >> seatCount;

    cout << "Enter the van ID: ";
    cin >> vanID;

    cout << "Enter payload in kg: ";
    cin >> payload;

    Bus b1(busID,seatCount);
    Van v1(vanID,payload);
    b1.display();
    v1.display();
    
    return 0;
}