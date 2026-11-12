#include <iostream>
using namespace std;

int main(){
    int starting_reading;
    cout<<"Enter the Starting Reading : ";
    cin>>starting_reading;
    int atmost =8;

    do{
        cout<<starting_reading<<endl;
        starting_reading+=2;
    }while(starting_reading <=8);
    return 0;
}