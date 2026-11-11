#include <iostream>
using namespace std;

int main(){
    int bs;
    cout<<"Enter the Board Side : ";
    cin>>bs;
    bool flag = true;
    
    for(int i =0; i<bs; i++){
        for(int j=0; j<bs; j++){
            if(flag){
                cout<<"#";
                flag = false;
            }else{
                cout<<".";
                flag = true;
            }
        }
        cout<<endl;
    }
    return 0;
}