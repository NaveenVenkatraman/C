#include <iostream>
using namespace std;

int main(){
    int noteBooks;
    cout<<"Enter the NoteBooks : ";
    cin>>noteBooks;
    int cartons =0;
    int packed = 0;

    while(noteBooks >0){
        if(noteBooks >=4){
            noteBooks -=4;
            cout<<"Packed = 4"<<endl;
        
        }else{
            cout<<"Packed = "<<packed<<endl;
            noteBooks =0;
        }
        packed++;
        cartons++;
        
    }
    cout<<"Packed = "<<noteBooks<<endl;
    cout<<"Cartons = "<<cartons<<endl;
    return 0;
}