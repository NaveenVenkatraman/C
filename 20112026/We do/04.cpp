#include <iostream>
using namespace std;

class Garden{
    int length,width;

    public:
    Garden(int length,int width){
        this->length = length;
        this->width = width;
    }
    int area(){
        return this->length * this->width;
    }
    int perimeter(){
        return 2*(this->length + this->width);
    }
};

int main(){
    int l,w;
    cout<< "Enter the value of lenght and width : ";
    cin >> l >> w;
    Garden g1(l,w);
    cout << "Area : " << g1.area() << endl;
    cout << "Perimeter : " << g1.perimeter() << endl;
    return 0;
}