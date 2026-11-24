/*
Open a library account
A librarian creates a new member account before any books have been
borrowed. Requirements
Create class LibraryAccount with private borrowedCount. A default constructor
sets it to 0. Provide borrowOne() and getBorrowedCount(). Call borrowOne once
per requested book and display the final count from main. Constraints
Requested books are 0–5. Every request is accepted. Test case 1
Input — Requested books 3
Output — Books borrowed 3
Test case 2
Input — Requested books 0
Output — Books
*/
#include <iostream>
using namespace std;

class LibraryAccount{
    private:
    int borrowedCount;

    public:
    LibraryAccount(){
        this->borrowedCount = 0;
    }
    void borrowOne(){
        this->borrowedCount++;
    }
    int getBorrowedCount(){
        return borrowedCount;
    }
};

int main(){
    LibraryAccount user1;
    int amount;
    cout << "Requested Books : ";
    cin >> amount;

    for(int i=0; i<amount; i++){
        user1.borrowOne;
    }
    return 0;
}
