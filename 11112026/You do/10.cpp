#include <iostream>
using namespace std;

int main()
{
    int lanes;
    int marker_total = 0;
    cout<<"Enter the Lanes : ";
    cin>>lanes;

   for(int i=1; i<=lanes; i++){
        cout<<i*3<<endl;
        marker_total += i*3;
   }

   cout<<"Marker Total : "<<marker_total;

    return 0;
}