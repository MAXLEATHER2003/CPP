#include <iostream>
#include <string>

using namespace std;

void reverseString(string str) {
    for (int i = str.length() - 1; i >= 0; i--) {
        cout << str[i];
    }
    cout << endl;
}

int main() {
    string word;
    string inputString;

    cout << "Enter a string (words separated by spaces, end with a period): ";

    while (cin >> word && word != ".") {
        inputString += word + " ";
    }

    if (!inputString.empty()) {
        inputString.pop_back();
    }

    cout << "Reversed string: ";
    reverseString(inputString);

    return 0;
}
