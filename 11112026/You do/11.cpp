#include <iostream>
using namespace std;

int main()
{
    int tag_num;
    cout<<"Enter the Tag Number : ";
    cin>>tag_num;

    

    int even_count = (tag_num == 0) ? 1 : 0;
    while(tag_num >0){
        int digit = tag_num %10;
        if(digit==0 || digit%2==0){
            even_count++;
        }
        tag_num /= 10;
    }

    cout<<"Even Count : "<<even_count;

    return 0;
}