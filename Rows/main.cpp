#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void countCharacters(const string& str, int& letters, int& digits, int& others) {
    letters = digits = others = 0;
    for (char ch : str) {
        if (isalpha(ch)) {
            letters++;
        }
        else if (isdigit(ch)) {
            digits++;
        }
        else {
            others++;
        }
    }
}

int main() {
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    int letters, digits, others;
    countCharacters(input, letters, digits, others);

    cout << "Letters: " << letters << endl;
    cout << "Digits: " << digits << endl;
    cout << "Other characters: " << others << endl;

    return 0;
}
