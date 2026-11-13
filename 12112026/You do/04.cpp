/*
Manage a workshop queue
Problem Statement – A registration desk adds one participant and then 
removes a cancelled registration.
Given Data – Capacity = 6. Used IDs = 101, 105, 110, 114. Insert 108 at index 
2. Then delete index 3 from the updated array.
Task – Check capacity and index bounds before insertion and check index 
bounds before deletion. Print the used entries and logical size after each 
operation.

*/

#include <iostream>
using namespace std;

int main(){
    int capacity = 6;
    int used_IDs[6] = {101,105,110,114};
    int logical_size = 4;
    int userChoice =0;
    bool turn_on = true;

    while(turn_on){

        cout<<"\n{ ";
        for(int i=0;i<logical_size; i++){
            cout<<used_IDs[i]<<", ";
        }
        cout<<" } "<<"\t| Logical Size = "<<logical_size<<endl;

        cout<<"----------------------"<<endl;
        cout<<"1. Insert Value"<<endl;
        cout<<"2. Delete Value"<<endl;
        cout<<"3. Display Array"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"----------------------"<<endl<<endl;

        cout<<"Enter the Option : ";
        cin>>userChoice;
       
        switch(userChoice){
            case 1:{
                int insert_value;
                int index;
                cout<<"\nEnter the Insert Value :  ";
                cin>>insert_value;
                cout<<"\nEnter the index : ";
                cin>>index;

                if(index<6 && logical_size<=5){
                    for(int i=logical_size+1; i>=index; i--){
                        used_IDs[i+1] = used_IDs[i];
                    }

                    used_IDs[index] = insert_value;
                    logical_size++;
                }else{
                    cout<<"\nInvalid index or Array size is filled..!\n"<<endl;
                }
                break;
            }
            case 2:{
                int index;
                cout<<"\nEnter the index to delete : ";
                cin>>index;

                if(index<6 && index>=0 && logical_size>0){
                    for(int i=index; i>=logical_size; i++){
                        used_IDs[i] = used_IDs[i+1];
                    }
                    logical_size--;
                }else{
                    if(logical_size == 0){
                        cout<<"\nArray is empty..!\n"<<endl;
                    }
                    else{
                        cout<<"\nInvalid index..!\n"<<endl;
                    }
                    
                }
                break;

            }
            case 3:{
                cout<<"\n{ ";
                for(int i=0;i<logical_size; i++){
                    cout<<used_IDs[i]<<", ";
                }
                cout<<" }\n"<<endl;
                break;
            }
            case 4:{
                turn_on = false;
                break;
            }

        }
    }

    return 0;
}