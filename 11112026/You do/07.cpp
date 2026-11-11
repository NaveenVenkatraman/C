#include <iostream>
using namespace std;

int main()
{
    int pages,capacity;
    cout<<"Enter the pages : ";
    cin>>pages;
    cout<<"Enter the capacity : ";
    cin>>capacity;
    int batches=0;

    while(pages> 0){
        pages = pages - capacity;
        (pages > 0) ? cout<<"Pages remaining : "<<pages<<endl : cout<<"Pages remaining : 0"<<endl;
        batches++;
    }

    cout<<"Batches : "<<batches;

    return 0;
}