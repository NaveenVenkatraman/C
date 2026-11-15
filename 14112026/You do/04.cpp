
#include <iostream>
#include <string>
using namespace std;

int main() {

    string name;
    string firstName;

    getline(cin, name);

    for(int i=0; i<name.length(); i++){
        if(name[i] != ' '){
            firstName += name[i];
        }
        else{
            break;
        }
    }
    cout<<firstName;

    return 0;
}
