#include <iostream>
using namespace std;
#include <string>
#include <sstream>

int main(){
    string name;
    cout<<"Enter you Name : ";
    getline(cin,name);

    string words;

    stringstream ss(name);
    
    while(ss >> words){
        cout<<words<<endl;
    }

    
    cout<<name;
    return 0;
}