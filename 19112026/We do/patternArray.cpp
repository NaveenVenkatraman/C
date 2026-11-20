#include <iostream>
using namespace std;

int main(){
    char grid[3][3];

    for(int i=1; i<4; i++){
        for(int j=1; j<=i; j++){
            grid[i][j] = '*';
        }
    }

    for(int i=1; i<4; i++){
        for(int j=1; j<=i; j++){
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}