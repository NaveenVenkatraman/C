#include <iostream>
using namespace std;

class Person{
    string name;

    public: 
    Person(string name){
        this->name = name;
    }
    string getName(){
        return this->name;
    }
};

class Student : public Person{
    int id;

    public:
    Student(int num, string name) : Person(name) {
        this->id = num;
    }
    int getId(){
        return this->id;
    }
};

class ScholarshipStudent : public Student{
    int award;
    public:
    ScholarshipStudent(int id, string name, int amount) : Student(id,name){
        this->award = award;
    }
    int getamount(){
        return this->award;
    }

    void display(){
        cout << getName() << " | "<<" ID " <<getId() << " | " << "Award Rs "<<getamount();
    }
};

int main(){
    string name;
    int id,amount;

    cout << "Enter the name : ";
    cin >> name;

    cout << "Enter the student ID :";
    cin >> id;

    cout << "Enter the award in rupees :";
    cin >> amount;

    ScholarshipStudent student_1(id,name,amount);
    student_1.display();

    return 0;
}