#include <iostream>
using namespace std;

class Rectangular{
    int length,width;

    public:
        void setter(int length, int width){
            this->length = length;
            this->width = width;
        }
        int calculateArea(){
            return this->length * this->width;
        }
};

int main(){
    int length,width;
    Rectangular R1;
    cout << "Enter the room length in metres : ";
    cin >> length;
    cout << "Enter the room width in metres : ";
    cin >> width;

    R1.setter(length,width);
    cout << "Area "<<R1.calculateArea() << " square meters";
    return 0;
}