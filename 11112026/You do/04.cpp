#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the num : ";
    cin>>num;

    do{
        cout<<num<<endl;
        num++;
    }while(num<=4);

    return 0;
}