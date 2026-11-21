#include <iostream>
using namespace std;

struct student{
    int rollNo;
    string name;
    int csmark;
    bool result;
};

int main(){
    student records[2];
    cout<<"\n\n*****************Enter the student details**************\n";
    for(int i=0; i<2; i++){
        cout<<"Enter the Roll Number : ";
        cin>>records[i].rollNo;
        cout<<"Enter the Name : ";
        cin>>records[i].name;
        cout<<"Enter the CS mark : ";
        cin>>records[i].csmark;
        cout<<"Enter the result : ";
        cin>>records[i].result;
        cout<<"\n-----------"<<records[i].name<<" record created successfully..."<<"---------------\n\n";
    }
    cout<<"\n-----------------------------------------------\n";
    for(int i=0; i<2; i++){
        cout<<"Roll Number : "<<records[i].rollNo<<endl;
        cout<<"Student Name : "<<records[i].name<<endl;
        cout<<"CS Mark : "<<records[i].csmark<<endl;
        cout<<"Result : "<<records[i].result<<endl;
        cout<<"---------------------------\n";
    }
    return 0;
}