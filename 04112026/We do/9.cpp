#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> marks = {23,34,49};
    int sum = 0;
    for(int i=0;i<marks.size();i++){
        sum+=marks[i];
    }
    cout<<"Sum of marks: "<<sum<<endl;
    cout<<"Average of marks: "<<sum/marks.size()<<endl;

    return 0;
}