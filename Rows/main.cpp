#include <iostream>
#include <string>

using namespace std;

string removeAllOccurrences(string str, char ch) {
    str.erase(remove(str.begin(), str.end(), ch), str.end());
    return str;
}

int main() {
    string input;
    char ch;

    cout << "Enter a string: ";
    getline(cin, input);

    cout << "Enter the character to remove: ";
    cin >> ch;

    string result = removeAllOccurrences(input, ch);
    cout << "Result: " << result << endl;

    return 0;
}
