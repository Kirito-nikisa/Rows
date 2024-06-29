#include <iostream>
#include <string>

using namespace std;

string insertCharacter(string str, char ch, int index) {
    if (index < 0 || index > str.length()) {
        cerr << "Index out of bounds!" << endl;
        return str;
    }
    str.insert(str.begin() + index, ch);
    return str;
}

int main() {
    string input;
    char ch;
    int index;

    cout << "Enter a string: ";
    getline(cin, input);

    cout << "Enter the character to insert: ";
    cin >> ch;

    cout << "Enter the index at which to insert the character: ";
    cin >> index;

    string result = insertCharacter(input, ch, index);
    cout << "Result: " << result << endl;

    return 0;
}
