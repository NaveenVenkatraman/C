#include <iostream>
using namespace std;

int main()
{
    int upper_limit;
    cout<<"Enter the Upper Limit : ";
    cin>>upper_limit;

    int first,second;

    int appearances = 0;

    for(int i=1; i<=upper_limit; i++){
        first = i/10;
        second = i%10;

        cout<<"First : "<<first<<" Second : "<<second<<endl;

        if(first == 2){
            appearances++;
        }
        if(second == 2){
            appearances++;
        }
    }

    cout<<"Digit 2 appearances = "<<appearances;

    return 0;
}