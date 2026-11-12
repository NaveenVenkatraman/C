#include <iostream>
using namespace std;

int main(){
    int participants;
    cout<<"Enter the Number of Participants : ";
    cin>>participants;
    int passes_stamped =0;

    for(int i=1; i<=participants; i++){
        cout<<i<<endl;
        passes_stamped++;
    }
    cout<<"Passes Stamped : "<<passes_stamped;
    return 0;
}