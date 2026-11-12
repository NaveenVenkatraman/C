#include <iostream>
using namespace std;

int main(){
    int row;
    cout<<"Enter the row : ";
    cin>>row;
    int sum =0;

    for(int i=1; i<=row; i++){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
            sum+=j;
        }
        cout<<endl;
        
    }
    cout<<"Sum : "<<sum;
    return 0;
}