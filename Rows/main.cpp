#include <iostream>
#include <cctype>

using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int letter_count = 0;
    int digit_count = 0;
    int other_count = 0;

    for (char c : input) {
        if (isalpha(c)) {
            letter_count++;
        }
        else if (isdigit(c)) {
            digit_count++;
        }
        else {
            other_count++;
        }
    }

    cout << "Letters: " << letter_count << endl;
    cout << "Digits: " << digit_count << endl;
    cout << "Other characters: " << other_count << endl;

    return 0;
}
