#include <iostream>
using namespace std;

int main()
{
    int totalMin = 200;
    int hours = totalMin / 60;
    int minutes = totalMin % 60;
    cout<<hours<<" hours "<<minutes<<" minutes"<<endl;
    return 0;
}
