#include <iostream>
using namespace std;

int main()
{
    int fixed = 30;
    int perKm = 9;
    int km = 18;
    int fare =fixed+perKm*km;
    cout<<"Fare = "<<fare<<" rupees"<<endl;
    return 0;
}
