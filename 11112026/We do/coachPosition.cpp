#include <iostream>
using namespace std;

int main(){
    int num;
    int total = 0;
    cout<<"Enter the number : ";
    cin>>num;
    int pos = 4;
    for(int i =1; i<=num; i++){
        cout<<i*pos<<endl;
        total+=i*pos;
    }
    cout<<endl<<"Total : "<<total;
    
    return 0;
}