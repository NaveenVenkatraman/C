#include <iostream>
using namespace std;

int main(){
    int odd_square = 0;
    int even_count = 0;
    int card;
    cout<<"Enter the card : ";
    cin>>card;

    for(int i=1; i<=card; i++){
        if(i%2==0){
            even_count++;
        }
        else{
            odd_square += i*i;
        }
    }

    cout<<"Even_count : "<<even_count<<endl;
    cout<<"Odd_square : "<<odd_square;
    return 0;
}