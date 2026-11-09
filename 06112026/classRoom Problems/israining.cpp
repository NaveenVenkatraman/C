#include <iostream>
using namespace std;

int main(){
    bool is_raining;
    cout<<"Is raining : ";
    cin>>is_raining;
    if(is_raining){
        cout<<"Stay home and play video games...";
    }
    else{
        cout<<"You can play outside..";
    }
    return 0;
}