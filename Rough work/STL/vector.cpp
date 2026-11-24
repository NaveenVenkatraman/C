#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vec(5,1);     //vec(size,value you want you fill initially)
    vec.push_back(10);
    vec.push_back(11);

    vector<pair<int,int>>vect{{1,2},{2,3},{3,4}};

    for(auto it = vec.begin(); it!=vec.end(); it++){
        cout<<*it<<" ";
    }
    return 0;
}