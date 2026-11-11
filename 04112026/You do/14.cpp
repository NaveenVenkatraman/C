#include <iostream>
using namespace std;

int main()
{
    int pens = 25;
    int buyPrice = 8;
    int sellPrice = 11;
    int cost = pens*buyPrice;
    int sale = pens*sellPrice;
    int profit = sale-cost;
    cout << "Total profit="<<profit<<" rupees"<< endl;
    return 0;
}
