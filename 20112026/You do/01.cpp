
#include <iostream>
using namespace std;

struct Book {
    string title;
    int bookId;
    int copies;
};

int main() {
    Book book;

    cout << "Enter Book Title: ";
    cin >> book.title;

    cout << "Enter Book ID: ";
    cin >> book.bookId;

    cout << "Enter Number of Copies: ";
    cin >> book.copies;

    cout << "\nTitle " << book.title
         << " ID " << book.bookId
         << " Copies " << book.copies << endl;

    return 0;
}
