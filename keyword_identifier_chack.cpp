#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

const unordered_set<string> keywords = {"alignas", "alignof", "and", "and_eq", "asm", "auto", "bitand", "bitor", "bool", "break", "case", "catch", "char", "char8_t", "class", "compl", "const", "const_cast", "continue", "decltype", "default", "delete", "do", "double", "dynamic_cast", "else", "enum", "explicit", "export", "extern", "false", "float", "for", "friend", "goto", "if", "inline", "int", "long", "mutable", "namespace", "new", "noexcept", "not", "not_eq", "nullptr", "operator", "or", "or_eq", "private", "protected", "public", "register", "reinterpret_cast", "return", "short", "signed", "sizeof", "static", "static_cast", "struct", "switch", "template", "this", "thread_local", "throw", "true", "try", "typedef", "typeid", "typename", "union", "unsigned", "using", "virtual", "void", "volatile", "wchar_t", "while"};

bool isKeyword(const string& token) {
    return keywords.find(token) != keywords.end();
}

bool isIdentifier(const string& token) {
    if (token.empty() || !isalpha(token[0]) && token[0] != '_') return false;
    for (char c : token) {
        if (!isalnum(c) && c != '_') return false;
    }
    return true;
}

int main() {
    string token;
    getline(cin, token);
    if (isKeyword(token)) {
        cout << "Keyword";
    } else if (isIdentifier(token)) {
        cout << "Identifier";
    } else {
        cout << "Invalid";
    }
    cout << endl;
    return 0;
}
