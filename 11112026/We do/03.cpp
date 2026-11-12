// Input 1: 3 rows and 4 columns 

// Output 1: 

// 1 2 3 4 
// 2 4 6 8 
// 3 6 9 12 
// Sum = 60 
// Maximum = 12 
#include <iostream>
using  namespace std;

int main(){
    int row,col;
    int sum=0;
    int max = 0;
    cout<<"Enter the Row : ";
    cin>>row;
    cout<<"Enter the col : ";
    cin>>col;


    for(int i=1 ; i<=row; i++){
        for(int j =1; j<=col; j++){
            cout<<i*j<<" ";
            sum += i*j;
            max = i*j;
            
        }
        cout<<endl;
        
    }
    cout<<"Sum : "<<sum<<endl;
    cout<<"Maxium : "<<max;

    return 0;
}