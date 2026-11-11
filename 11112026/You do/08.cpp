#include <iostream>
using namespace std;

int main()
{
    int code;
    cout<<"Enter the Parcel code : ";
    cin>>code;

    int sum = 0;
    while(code !=0){
        int digit = code %10;
        sum += digit;
        code /= 10;
    }

    cout<<"Sum : "<<sum;

    return 0;
}