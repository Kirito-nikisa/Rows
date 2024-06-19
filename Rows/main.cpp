#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    stringstream ss(sentence);
    string word;
    int word_count = 0;

    while (ss >> word) {
        word_count++;
    }

    cout << "Number of words in the sentence: " << word_count << endl;

    return 0;
}
