#include <iostream>
using namespace std;

class Person{
    string name;

    public:
    Person(string name){
        this->name = name;
    }
    string getName(){
        return this->name;
    }
};

class Participant : public Person{
    int regNum;

    public:
        Participant(int num,string name) : Person(name){
            this->regNum = num;
        }

        void setReg(int num){
            this->regNum = num;
        }

        void display(){
            cout << getName() << " | Registration " << regNum;
        }
};

int main(){
    string name;
    int num;
    cout << "Enter the name : ";
    cin >> name;

    cout << "Enter the registration number : ";
    cin >> num;

    Participant par(num,name);
    par.display();


    return 0;
}