
#include <iostream>
#include <string>
using namespace std;

int main() {

    string word;
    string res = "";

    getline(cin, word);

    for(int i = word.length() - 1; i >= 0; i--) {

        res += word[i];

    }

    cout << res << endl;

    return 0;
}
