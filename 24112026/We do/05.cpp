#include <iostream>
using namespace std;

class Bus{
    int seats = 30;

    public:

    void booking(int num){
       
         if(this->seats >= num && num >0 ){ //22 22
            this->seats -= num;
            cout << "Accepted " <<this->seats <<endl;
        }
        else{
            cout << "Rejected " <<this->seats <<endl;
        }
    }
    
};

int main(){
    Bus b1;
   int request, book;
   cout << "Enter the number of requests : ";
   cin >> request;

   for(int i=1 ; i<request+1; i++){
        cout << "Enter the number of seats for request "<< i << " ";
        cin >> book;
        b1.booking(book);
   }
    return 0;
}