#include <iostream>
using namespace std;

int main()
{
    int students = 1430;
    int per_bus = 50;
    int bus = students / per_bus;
    int left = students % per_bus;
    cout<< "Full buses = " << bus << endl;
    cout<<"Students without seat = "<<left<<endl;
    return 0;
}
