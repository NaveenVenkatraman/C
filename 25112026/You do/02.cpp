#include <iostream>
using namespace std;

class Equipment{
    int eqCode;

    public:
    void setCode(int value){
        this->eqCode = value;
    }
    int getCode(){
        return this->eqCode;
    }

};

class Generator : public Equipment{
    int rating;

    public:
    void setRating(int value){
        this->rating = value;
    }

     int getRating(){
        return this->rating;
    }

    void display(){
        cout << "Generator "<< " "<< getCode() << " : " <<rating <<"KW" <<endl;
    }

};

class Pump : public Equipment{
    int rating;

    public:
    void setRating(int value){
        this->rating = value;
    }

     int getRating(){
        return this->rating;
    }
    void display(){
        cout << "Pump "<< " "<< getCode() << " : " <<rating <<"L/min" <<endl;
    }

};

int main(){
    Pump p;
    Generator g;
    int gen_code;
    int gen_rate;
    int pump_code;
    int pump_rate;
    cout << " Enter the generator code : ";
    cin >> gen_code;
    cout << "Enter the generator rating : ";
    cin >> gen_rate;
    cout << "Enter the pump code : ";
    cin >> pump_code;
    cout << "Enter the pump rating : ";
    cin >> pump_rate;

    p.setCode(pump_code);
    g.setCode(gen_code);

    p.setRating(pump_rate);
    g.setRating(gen_rate);

    g.display();
    p.display();

    return 0;
}