#include <iostream>
using namespace std;

int main()
{
    int age;
    cin >> age;
    if (age<0||age>120)
    {
        cout<<"Invalid input"<< endl;
    }
    else if (age>= 60)
    {
        cout<<"Eligible for senior citizn discount"<<endl;
    }
    else
    {
        cout<<"Not eligible for senior citizen discount"<<endl;
    }
    return 0;
}
