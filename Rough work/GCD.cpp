#include <iostream>
using namespace std;

int main() {
    //Your Code goes here!
   while(true){
     int a;
    int b;
    cout<<"Enter a and b : ";
    cin>>a>>b;

    while(b!=0){
        int reminder = a%b;
        a = b;
        b = reminder;
    }

    cout<<a<<endl;
   }

    return 0;
}

