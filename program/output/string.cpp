

#include <iostream>
#include<string.h>
using namespace std;
void removeConsecutiveDuplicates(string& str) {
    if (str.empty()) 
        return;

    int pos = 0; 
    for (int i = 1; i < str.length(); ++i) {
        if (str[i] != str[pos]) { 
            ++pos; 
            str[pos] = str[i]; 
        }
    }
    str.erase(pos + 1);
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    removeConsecutiveDuplicates(input);

    cout << "String after removing consecutive duplicates: " << input << endl;

    return 0;
}

