#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the num : ";
    cin>>num;

    int start_score = 30;
    int qualified = 0;
    int qualified_sum = 0;

    for(int i=0; i<num; i++){
        

        if(start_score >= 60){
            cout<<start_score<<endl;
            qualified++;
            qualified_sum += start_score;
        }
        start_score += 10;

    }
    cout<<"Qualified : "<<qualified<<endl;
    cout<<"Qualified sum : "<<qualified_sum;

    return 0;
}