#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    int sum = 0 ;
    int count = 0;
    
    for(int i =1 ; i<=num; i++){
       sum += i;
       count++;
    }
    
    cout<<sum<<endl;
    cout<<count<<endl;
    cout<<"Average : "<<sum/count;
    return 0;
}