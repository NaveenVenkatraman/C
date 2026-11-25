#include <iostream>
using namespace std;

class GateCounter{
    int count;

    public:
    GateCounter(){
        this->count = 0;
    }
    void enter(){

    }
    int getCount(){
        return this->count;
    }
};

int main(){
    GateCounter gc;
    return 0;
}