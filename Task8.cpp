#include <iostream>
#include <string>
using namespace std;
int findSubstring(const string text, const string pattern) {
    // Empty pattern case
    if (pattern.empty())
    { 
        cout<<"Pattern not present"<<endl;
        return 0; 
    }
    int textLength = text.length();
    int patternLength = pattern.length();

    for (int i = 0; i <= textLength - patternLength; ++i) {
        if (text.substr(i, patternLength) == pattern) {
            return i; // Return index of the first occurrence
        }
    }
    return -1; // Pattern not found
}

int main() {
    string text, pattern;
    text="xyz went to maths while cs got ijk";
    pattern="xyz";

    int result = findSubstring(text, pattern);
    if (result != -1) {
        cout << "Pattern found at index: " << result << endl;
    } else {
        cout << "Pattern not found" << endl;
    }
    return 0;
}