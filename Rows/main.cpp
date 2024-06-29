#include <iostream>
#include <string>

using namespace std;

string removeCharacter(string str, int index) {
    if (index < 0 || index >= str.length()) {
        cerr << "Index out of bounds!" << endl;
        return str;
    }
    str.erase(index, 1);
    return str;
}

int main() {
    string input;
    int index;

    cout << "Enter a string: ";
    getline(cin, input);

    cout << "Enter the index of the character to remove: ";
    cin >> index;

    string result = removeCharacter(input, index);
    cout << "Result: " << result << endl;

    return 0;
}
