#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isMatchingPair(char opening, char closing) {
    if (opening == '(' && closing == ')') return true;
    if (opening == '[' && closing == ']') return true;
    if (opening == '{' && closing == '}') return true;
    return false;
}

bool isBalanced(const string expression) {
    stack<char> s;

    for (char c : expression) {
        if (c == '(' || c == '[' || c == '{') {
            s.push(c);
        } else if (c == ')' || c == ']' || c == '}') {
            if (s.empty() || !isMatchingPair(s.top(), c)) {
                return false;
            }
            s.pop();
        }
    }

    return s.empty();
}

int main() {
    string expr1 = "{[(idug isur)]}";
    string expr2 = "([)]";
    string expr3 = "{{{{";
    string expr4 = "}}}}}";
    string expr5 = "()[]{}";
    string expr6 = "(dfg{[(ds)]fgh})";

    cout << expr1 << ": " << (isBalanced(expr1) ? "Balanced" : "Not Balanced") << endl;
    cout << expr2 << ": " << (isBalanced(expr2) ? "Balanced" : "Not Balanced") << endl;
    cout << expr3 << ": " << (isBalanced(expr3) ? "Balanced" : "Not Balanced") << endl;
    cout << expr4 << ": " << (isBalanced(expr4) ? "Balanced" : "Not Balanced") << endl;
    cout << expr5 << ": " << (isBalanced(expr5) ? "Balanced" : "Not Balanced") << endl;
    cout << expr6 << ": " << (isBalanced(expr6) ? "Balanced" : "Not Balanced") << endl;

    return 0;
}
