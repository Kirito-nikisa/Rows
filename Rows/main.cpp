#include <iostream>
#include <string>

using namespace std;

int countOccurrences(const string& str, char ch) {
    int count = 0;
    for (char currentChar : str) {
        if (currentChar == ch) {
            count++;
        }
    }
    return count;
}

int main() {
    string input;
    char ch;

    cout << "Enter a string: ";
    getline(cin, input);

    cout << "Enter the character to count: ";
    cin >> ch;

    int count = countOccurrences(input, ch);
    cout << "The character '" << ch << "' appears " << count << " times in the string." << endl;

    return 0;
}
