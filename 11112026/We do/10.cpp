// #include <iostream>
// using namespace std;

// int main(){
//     int lenght = 48;
//     int breath = 18;
//     float area = lenght * breath;
//     cout<<"Area : "<<area<<endl;

//     // int noOfTiles = area/side *side;
//     cout<<"Side of Square : "<<"Area of square "<<"Area of floor "<<"Area%i*i"<<"Number of tiles"<<endl;
//     for(int i=1; i<100 ; i++){
//         cout<<i<<"\t\t"<<i*i<<"\t\t"<<area<<"\t\t"<<int(area)%(i*i)<<"\t\t"<<area/(i*i)<<endl;
//     }
//     return 0;
// }

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

