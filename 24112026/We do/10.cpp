#include <iostream>
using namespace std;

class LabInventory{
    int stock;

    public:
    LabInventory(){
        this->stock = 20;
    }

    void issueKit(int num){
       
         if(this->stock >= num && num >0 ){ //22 22
            this->stock -= num;
            cout << "Accepted " <<this->stock <<endl;
        }
        else{
            cout << "Rejected " <<this->stock <<endl;
        }
    }
    
};

int main(){
    LabInventory b1;
   int request, kit;
   cout << "Enter the number of requests : ";
   cin >> request;

   for(int i=1 ; i<request+1; i++){
        cout << "Enter the number of stock for request "<< i << " ";
        cin >> kit;
        b1.issueKit(kit);
   }
    return 0;
}