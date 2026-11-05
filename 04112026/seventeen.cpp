#include <iostream>
using namespace std;

int main() {
    //Your Code goes here!
    int total_students = 1250;
    int bus_capacity = 45;
    cout<<"Number of buses required: "<< total_students/bus_capacity<<endl;
    cout<<"Number of students left without bus: "<< total_students%bus_capacity<<endl;

    return 0;
} 