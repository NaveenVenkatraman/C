#include <iostream>
using namespace std;

class Asset{
    protected:
        int id;
    
    public:
    void setId(int id){
        this->id = id;
    }
    int getId(){
        return this->id;
    }
};

class Cylinder : public Asset{
    int capacity;

    public:
    void setCap(int cap){
        this->capacity = cap;
    }
    int getCap(){
        return this->capacity;
    }

    void display(){
        cout<< "Asset "<<getId() <<" | Capacity "<<getCap();
    }
};

int main(){
    int id,cap;
    cout << "Enter the asset ID : ";
    cin >> id;
    cout << "Enter the Capacity in liters : ";
    cin >> cap;
    Cylinder cyl;
    cyl.setCap(cap);
    cyl.setId(id);
    cyl.display();
    return 0;
}