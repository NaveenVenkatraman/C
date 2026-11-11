
#include <iostream>
using namespace std;

int main()
{
    int balance, payment_limit;

    cout << "Enter the Balance: ";
    cin >> balance;

    cout << "Enter the Payment Limit: ";
    cin >> payment_limit;

    int count = 0;

    while (balance > 0)
    {
        if(balance >= payment_limit){
             balance = balance - payment_limit;
             cout<<payment_limit<<endl;
        }
        else{
            cout<<balance<<endl;
            balance = 0;
        }
        
        count++;
       
    }

    cout << "Visits = " << count;

    return 0;
}
