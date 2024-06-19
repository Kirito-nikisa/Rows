#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    getline(cin, input);

    for (char& c : input) {
        if (c == ' ') {
            c = '\t';
        }
    }

    cout << "String after replacement: " << input << endl;

    return 0;
}
