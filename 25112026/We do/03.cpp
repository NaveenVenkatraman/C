#include <iostream>
using namespace std;

class Employee{
    string phoneNumber;

    public:
        Employee(string num){
            this->phoneNumber = num;
        }
        string getNum(){
            return this->phoneNumber;
        }

};

class Technician : public Employee{
    string role;

    public:
        Technician(string num,string role) : Employee(num){
            this->role = role;
        }
        void display(){
            cout << this->role << " : " << getNum();
        }
};

int main(){
    string num,role;
    cout << "Entert the phone number : ";
    cin >> num;
    cout << "Enter the role : ";
    cin >> role;

    Technician tech(num,role);
    tech.display();
    return 0;
}