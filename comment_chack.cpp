#include <iostream>
#include <string>
using namespace std;

string withoutComments(string input) {
    string output = "";
    bool inComment = false;
    bool inMultiLineComment = false;

    for (int i = 0; i < input.length(); i++) {
        if (input[i] == '/' && input[i+1] == '/') {
            inComment = true;
            i++;
        } else if (input[i] == '/' && input[i+1] == '*') {
            inMultiLineComment = true;
            i += 2;
        } else if (input[i] == '*' && input[i+1] == '/') {
            inMultiLineComment = false;
            i += 2;
        } else if (input[i] == '\n' && inComment) {
            inComment = false;
        } else if (inComment || inMultiLineComment) {
            continue;
        }
        else {
            output += input[i];
        }
    }

    return output;
}

int main() {
    string multiLineInputs;
    string line;

    cout << "Enter multi-line inputs (type 'exit' to finish):\n";
    while (true) {
        getline(cin, line);
        if (line == "exit") {
            break;
        }
        multiLineInputs += line + "\n";
    }

    cout << withoutComments(multiLineInputs);
}
