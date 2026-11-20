#include <iostream>
using namespace std;

int main(){
    string sample = "Hello this is a Test";

    cout<<"The string is : "<<sample<<endl;
    cout<<"Length of the String : "<<sample.length()<<endl;
    cout<<"The frist char of the string : "<<sample.front()<<endl;
    cout<<"The last char of the string : "<<sample.back()<<endl;
    cout<<"The Existence of hte String (is) : "<<sample.find("is")<<endl;
    cout<<"The Substring of the string is : "<<sample.substr(5,10)<<endl;
    return 0;
}