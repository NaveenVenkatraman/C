#include <iostream>
using namespace std;

int main()
{
    int guests;

    cout << "Enter number of guests: ";
    cin >> guests;

    for(int i = 1; i <= guests; i++)
    {
        cout << i << endl;
    }

    cout << "Badges = " << guests;

    return 0;
}