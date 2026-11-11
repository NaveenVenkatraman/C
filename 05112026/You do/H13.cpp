#include <iostream>
using namespace std;

int main()
{
    int c = 36;
    int f1 = c * 9 / 5 + 32;
    double f2 = c * 9.0 / 5 + 32;
    cout <<"With int values = " <<f1<<endl;
    cout<< "With 9.0 = " <<f2<<endl;
    return 0;
}
