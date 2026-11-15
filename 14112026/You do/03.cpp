
#include <iostream>
#include <string>
using namespace std;

int main() {

    string text;
    int count = 0;

    getline(cin, text);

    for(int i = 0; i < text.length(); i++) {

        if(text[i] == 'e') {
            count++;
        }

    }

    cout << count << endl;

    return 0;
}
