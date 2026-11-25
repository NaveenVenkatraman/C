#include <iostream>
using namespace std;

class  CouponWallet{
    int balance;
    
    public:
     CouponWallet(int value){
        this->balance = value;
    }

    void redeem(int num,int wallet){
        if(num > 0 && num <= this->balance){
            this->balance -= num;
            cout << "Accepted | " << "Wallet "<<wallet <<" balance : "<< this->balance<<endl;
        }else{
            cout << "Rejected | " << "Wallet "<<wallet <<" balance : "<< this->balance<<endl;
        }
    }

};

int main(){
    int value1,value2,request_1,request_2,num;
    cout<<"Enter the Opening balance for Wallet 1 : ";
    cin >> value1;
    cout<<"Enter the Opening balance for Wallet 2 : ";
    cin >> value2;

    CouponWallet wallet_1(value1);
    CouponWallet wallet_2(value2);
    
    cout << "Enter the request count for Wallet 1 :";
    cin >> request_1;

    for(int i=1 ; i<request_1+1; i++){
        int a;
        cout << "Enter coupons for Wallet 1, request "<<i;
        cin >> a;
        wallet_1.redeem(a,1);
    }
    cout << "Enter the request count for Wallet 2 :";
    cin >> request_2;

    for(int i=1 ; i<request_2+1; i++){
        int b;
        cout << "Enter coupons for Wallet 2, request "<<i;
        cin >> b;
        wallet_2.redeem(b,2);
    }

    return 0;
}