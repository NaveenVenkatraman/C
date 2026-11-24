#include <iostream>
using namespace std;

int main(){
    pair <int,int> pr;
    pr = {1,2};
    cout<<pr.first<<endl;
    cout<<pr.second<<endl;

    pair < pair<int,char>,pair<char,bool> > nested_pair;

    nested_pair = {{13,'Z'},{'Y',0}};

    cout<<nested_pair.first.first<<endl;
    cout<<nested_pair.second.first<<endl;
    return 0;
}