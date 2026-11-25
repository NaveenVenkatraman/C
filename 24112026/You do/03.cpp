#include <iostream>
using namespace std;

class  PrinterTray{
    int capacity = 200;
    int current_sheet_count;

    void percentage(){

    }

    public:

    void setCount(int value){
        this->current_sheet_count = value;
    }

    void display(){
        percentage();
    }

};

int main(){
    int num;
    cout << "Enter the number of checks : ";
    cin >> num;

    for(int i=1 ; i<num+1; i++){
        int val;
        cout << "Enter the sheet count for checks "<<i <<" : ";
        cin >> val;
        setCount(val);
    }
    return 0;
}