#include <iostream>
using namespace std;
#include <set>

int main(){
    //   set <int,greater<int>> st;
    set <int> st;
    int value;
    for(int i=0; i<5; i++){
        cin>>value;
        st.insert(value);
    }
    cout << "Set elements: ";

    for(int x : st){
        cout << x << " ";
    }

    
    return 0;
}