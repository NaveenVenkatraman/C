/*
Measure a notice board
The classroom needs the area of a rectangular notice board before buying
covering paper. Requirements
Define class Board with public length and width and a member function area()
that returns their product. Create an object, assign the dimensions and display
the area. Constraints
Dimensions are whole centimetres from 1 to 100. Test case 1
Input — Length 6, width 4
Output — Area 24 square centimetres
Test case 2
Input — Length 1, width 9
Output — Area 9 square
*/


#include <iostream>
#include <string>
using namespace std;

class Board{
    public:
    int length,width;

    int area(){
        return length * width;
    }
};

int main() {
    Board b1;
    cout << "Length : ";
    cin >> b1.length;
    cout << "Width : ";
    cin >> b1.width;

    cout << "Area "<< b1.area() << " square centimetres";

    return 0;
}
