#include <iostream>
using namespace std;

class Person{
    string name;

    public:

    string getName(){
        return this->name;
    }
    void setName(string name){
        this->name = name;
    }
};

class Instructor : public Person{
    string subject;

    public:
    void setSubject(string sub){
        this->subject = sub;
    }

    void display(){
        cout << getName() << " teaches " << this->subject;
    }
};

int main(){
    Instructor ins;
    string name,subject;
    cout << "Enter the Name : ";
    cin >> name;
    cout<< "Enter the Subject : ";
    cin >> subject;
    ins.setName(name);
    ins.setSubject(subject);
    ins.display();

    return 0;
}