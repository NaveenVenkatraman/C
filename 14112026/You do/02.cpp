
#include <iostream>
#include <string>
using namespace std;

int main() {

    string word;

    cin >> word;

    for(int i = 0; i < word.length(); i++) {

        cout << i << " " << word[i] << endl;

    }

    return 0;
}
