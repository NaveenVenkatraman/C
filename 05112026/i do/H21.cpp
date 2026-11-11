#include <iostream>
using namespace std;

int main()
{
    int year = 1900;
    if(year % 4 ==0 && year%100 ==0){
        cout << "Leap year = " << year << endl;
    }else{
        cout<<"Not a leap year";
    }
    
    return 0;
}
