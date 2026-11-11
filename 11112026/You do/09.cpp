#include <iostream>
using namespace std;

int main()
{
    int upper_limit;
    int positive_divisor = 3;
    int count = 0;
    cout<<"Enter the Upper Limit : ";
    cin>>upper_limit;
    int temp;
    int matches = 0;

   for(int i=1; i<=upper_limit; i++){
        for(int j=1; j<=i; j++){
            if(i%j ==0){
                count++;
                temp = j;
            }
        }
        if(count == positive_divisor){
            cout<<temp<<endl;
            matches++;
        }
        count =0;
   }

   cout<<"Matches : "<<matches;
   
    return 0;
}