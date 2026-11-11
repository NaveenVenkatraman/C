#include <iostream>
using namespace std;

int main(){
    int num = 39;
    int count = 0;
    while(num>9){
        int first = num/10;
        int second = num%10;
        count++;

        num = first * second;
    }
    cout<<num<<endl;
    cout<<"count : "<<count;
    return 0;
}