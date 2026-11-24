/*
Employee ID Card
An office needs to print an employee’s ID card on the first day of
work. Requirements
Create an Employee class with public data members for ID, name
and department. Assign values through one object and call its
public displayCard() function. Constraints
IDs are 1–999. Use one word each for the name and department. Test case 1
Enter the employee ID: 17
Enter the employee name: Arun
Enter the department: Sales
ID 17
Name Arun
Department Sales
Test case 2
Enter the employee ID: 28
Enter the employee name: Meena
Enter the department: Accounts
ID 28
Name Meena
Department Accounts*/

#include <iostream>
using namespace std;

class Employee{
    private:
        int id;
        string name;
        string department;

    public:
        void setter(int id, string name,string department){
            this->id = id;
            this->name = name;
            this->department = department;
        }

        void displayCard(){
            cout << "ID : " <<this->id <<endl;
            cout << "Name : " <<this->name <<endl;
            cout << "Department : " <<this->department <<endl;
        }

};

int main(){
    Employee E1;
    int id;
    string name, department;

    cout << "Enter the employee ID : ";
    cin >> id;
    cout << "Enter the employee Name : ";
    cin >> name;
    cout << "Enter the employee department : ";
    cin >> department;

    E1.setter(id,name,department);
    E1.displayCard();
    return 0;
}