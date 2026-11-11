#include <iostream>
using namespace std;

int main(){
    int num1,num2;
    cout<<"Enter the num1 : ";
    cin>>num1;
    cout<<"Enter the num2 : ";
    cin>>num2;
    int lcm = (num1 > num2) ? num1 : num2;
    
   while(true){
    if(lcm%num1 ==0 && lcm%num2 ==0){
        break;
    }
    lcm++;
   }
        
    
    cout<<lcm;
    return 0;
}