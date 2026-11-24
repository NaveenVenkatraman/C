/*
Library Book Record
A librarian needs to record a book’s ID, title and available copy
count. Requirements
Define a Book struct with public data members for these three
values. Create one object, read its details and print them in the
same order. Constraints
Book IDs are 1–999. Titles may contain spaces and are read on a
separate line. Copy counts are 0–100. Test case 1
Enter the Book ID: 101
Enter the Book Name: Basic C++
Enter the Number of Copies: 3
ID 101
Title Basic C++
Copies 3
Test case 2
Enter the Book ID: 205
Enter the Book Name: Data Structures
Enter the Number of Copies: 0
ID 205
Title Data Structures
Copies */

#include <iostream>
using namespace std;
#include <string>

struct Library{
    int book_id;
    string title;
    int count;
};

int main(){
    Library book1;
    cout << "Enter the Book ID : ";
    cin >> book1.book_id;
    cout << "Enter the Book Name : ";
    cin.ignore();
    getline(cin,book1.title);
    cout << "Enter the Number of Copies : ";
    cin >> book1.count;

    cout <<"ID " << book1.book_id <<endl;
    cout <<"Title " << book1.title <<endl;
    cout <<"Copies " << book1.count <<endl;
    return 0;
}