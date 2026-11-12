#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the Number : ";
    cin>>num;
    int count =0;

    for(int i=1; i<=num; i++){
        if(i%3==0){
               cout<<i<<endl;
               count++;
        }
     
    }
    cout<<"Count : "<<count;
    return 0;
}