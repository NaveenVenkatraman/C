#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;


    int first_previous =0;
    int second_previous = 1;
    int c;
    cout<<first_previous<<endl;
    cout<<second_previous<<endl;
    for(int i = 0 ; i<=num; i++){
        c = first_previous+second_previous;
        cout<<c<<endl;
        first_previous = second_previous;
        second_previous = c;
        
    }
    return 0;
}