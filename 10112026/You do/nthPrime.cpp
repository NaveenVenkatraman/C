#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    bool flag = true;

    for(int i = 2 ; i<=num; i++){
        flag = true;
        for(int j=2; j<i; j++){
            if(i%j==0){
                flag = false;
                break;
            }
        }
        
        if(flag == 1){
            cout<<"Prime "<<i<<endl;
        }
    }

    
    return 0;
}