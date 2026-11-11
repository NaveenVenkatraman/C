#include <iostream>
using namespace std;

int main()
{
    int order = 350;
    bool member = true;
    bool freeDelivery = order > 500 || member;
    cout << freeDelivery << endl;
    return 0;
}
