#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the Number : ";
    cin>>num;
    int prime_card =0;
    bool flag = true;

    for(int i=2; i<=num; i++){
        flag = true;
        for(int j=2; j<i; j++){
            if(i%j==0){
                flag = false;
                break;
            }
 
        }
         if(flag){
                prime_card++;
                cout<<i<<endl;
               
            }
       
    }

    cout<<"Prime Cards : "<<prime_card;
   
    return 0;
}