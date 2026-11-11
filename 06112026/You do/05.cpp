#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a==b)
    {
        cout <<"Both numbers are equal" <<endl;
        cout<< "Smallest = " << a<<endl;
    }
    else if (a<b)
    {
        cout << "Smallest =" << a << endl;
    }
    else
    {
        cout << "Smallest= " << b << endl;
    }
    return 0;
}
