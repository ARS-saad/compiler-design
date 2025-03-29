#include <iostream>
using namespace std;

bool isFloat(string str) {
    int decimalCount = 0;
    for (char c : str) {
        if (!isdigit(c) && c != '.') return false;
        if (c == '.') decimalCount++;
    }
    return decimalCount == 1;
}

bool isInteger(string str) {
    for (char c : str) {
        if (!isdigit(c)) return false;
    }
    return true;
}

int main() {
    string input;
    cout << "Enter a number: ";
    cin >> input;

    if (isFloat(input)) {
        cout << "The input is a float." << endl;
    } else if (isInteger(input)) {
        cout << "The input is an integer." << endl;
    } else {
        cout << "The input is neither a float nor an integer." << endl;
    }

    return 0;
}
