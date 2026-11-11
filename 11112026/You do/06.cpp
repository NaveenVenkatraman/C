#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the num : ";
    cin>>num;
    int first,second;
    int matches = 0;

    for(int i=10; i<=num; i++){
        first = i/10;
        second = i%10;

        if(first == second){
            cout<<i<<endl;
            matches++;
        }
    }
    cout<<"Matches = "<<matches;

    return 0;
}