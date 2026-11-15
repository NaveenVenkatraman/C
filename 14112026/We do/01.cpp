/*
The registration desk
At a college event, Anu Priya enters her full name at the registration 
desk. The trainer wants to see what two input methods save.
Sample input
Anu Priya
Your task
Run the program twice with fresh input. First read the name using cin >> 
name. Then use getline(cin, name). Predict and display the stored name 
in each run.
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string full_name;
    cout<<"Enter you Full Name (getline) : ";
    getline(cin,full_name);

    string name;
    cout<<"Enter you Name (cin) : ";
    cin>>name;
   
    cout<<full_name<<endl;
    cout<<name<<endl;
    
    return 0;
}