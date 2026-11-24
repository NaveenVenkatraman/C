/*
Record a quiz participant
At a school quiz, the registration desk needs a record of one participant’s name, roll number and mark. Requirements
Define struct Participant with public name, rollNumber and mark. Read the three
values, create an object and display its details in the same order. Constraints
Name is one word. Roll number is 1–999. Mark is 0–100. Test case 1
Input — Arun 12 85
Output — Name Arun | Roll 12 | Mark 85
Test case 2
Input — Meena 1 0
Output — Name Meena |*/

#include <iostream>
#include <string>
using namespace std;

struct Participant {
    string name;
    int rollNumber;
    int mark;
};

int main() {
    Participant pOne;

    cout << "Enter Name: ";
    cin >> pOne.name;

    cout << "Enter Roll Number: ";
    cin >> pOne.rollNumber;

    cout << "Enter Mark: ";
    cin >> pOne.mark;

    cout << "\n-------- Participant Details --------\n";
    cout << "Name: " << pOne.name << endl;
    cout << "Roll Number: " << pOne.rollNumber << endl;
    cout << "Mark: " << pOne.mark << endl;

    return 0;
}
