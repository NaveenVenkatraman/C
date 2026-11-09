#include <iostream>
using namespace std;

int main(){
    int bonus = 5;
    int attendance = 90;
    int ravi_mark = 78;
    int ravi_attendance = 94;
    int meena_mark = 82;
    int meena_attendance = 85;

    if(ravi_attendance > attendance){
        ravi_mark+=5;
    }
    if(meena_attendance > attendance){
        meena_mark +=5;
    }

    cout<<"Ravi Mark "<<ravi_mark<<endl;
    cout<<"Meena Mark "<<meena_mark;
    return 0;
}