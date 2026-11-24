#include <iostream>
using namespace std;

class AttendanceCounter{
    int count;

    public:
    AttendanceCounter(){
        count = 0;
    }
    void arrivals(){
        this->count++;
    }
    int display(){
        return this->count;
    }
};

int main(){
    AttendanceCounter record;
    cout << "Before : " <<record.display()<< endl;
    int arrivals;
    cout << "Enter the number of arrivals : ";
    cin >> arrivals;

    for(int i=0; i<arrivals; i++){
        record.arrivals();
    }

    cout << "After : " <<record.display()<< endl;

    return 0;
}