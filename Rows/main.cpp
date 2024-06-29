#include <iostream>
#include <string>

using namespace std;

string replaceDotsWithExclamations(string str) {
    for (char& ch : str) {
        if (ch == '.') {
            ch = '!';
        }
    }
    return str;
}

int main() {
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    string result = replaceDotsWithExclamations(input);
    cout << "Result: " << result << endl;

    return 0;
}
