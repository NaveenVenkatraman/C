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
    int rollNum;

    public:
        Student(int num,string name) : Person(name){
            this->rollNum = num;
        }
        int getRollNum(){
            return this->rollNum;
        }
};

class AssessmentReport : public Student{
    int mark1,mark2;

    public:
       AssessmentReport(int mark1, int mark2, string name, int roll) : Student(roll,name){
        this->mark1 = mark1;
        this->mark2 = mark2;
       } 
       int total(){
            return this->mark1 + this->mark2;
       }

       void display(){
            cout << getName() << " | " << "Roll " << getRollNum() << " | "<<total();
       }
};

int main(){
    string name;
    int num,m1,m2;
    cout << "Enter the name : ";
    cin >> name;
    cout << "Enter the Roll number :";
    cin >> num;
    cout << "Enter the Mark 1 :";
    cin >> m1;
    cout << "Enter the Mark 2 :";
    cin >> m2;
    AssessmentReport report1(m1,m2,name,num);
    report1.display();
    return 0;
}


