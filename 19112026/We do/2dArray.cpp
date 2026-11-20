#include <iostream>
using namespace std;

int main(){
    int first[3][3];
    int second[3][3];
    int sum[3][3];
    int difference[3][3];

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<"First ["<<i<<"]["<<j<<"]  : ";
            cin>>first[i][j];
        }
    }

    cout<<"\n---------------------------\n";

     for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<"second ["<<i<<"]["<<j<<"]  : ";
            cin>>second[i][j];
        }
    }

    cout<<"\n--------MATRIX-------------\n";

    cout<<"first : \n";
     for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<second[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"second : \n";
     for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<second[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"\n-------ADDITION--------\n";

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            sum[i][j] = first[i][j] + second[i][j];
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }

     cout<<"\n-------DIFFERENCE--------\n";

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            difference[i][j] = first[i][j] - second[i][j];
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<difference[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}