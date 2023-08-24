#include <iostream>
#include <string>
#include <unordered_map>
#include <bits/stdc++.h>

using namespace std;

string maximizeString(string input_str) {
    unordered_map<char, int> char_count;

    // Count the occurrences of each character
    for (char c : input_str) {
        char_count[c]++;
    }

    string result = "";

    // Iterate through the characters in reverse order
    for (int i = input_str.size() - 1; i >= 0; i--) {
        char c = input_str[i];

        // Append the character to the result string
        result += c;

        // Decrease the count of this character
        char_count[c]--;

        // Check if this character occurs again
        if (char_count[c] > 0) {
            // Delete one occurrence and break the loop
            char_count[c]--;
            break;
        }
    }

    // Reverse the result string to get the lexicographically maximum string
    reverse(result.begin(), result.end());

    return result;
}

int main() {
    string input_str;
    cout << "Enter the input string: ";
    cin >> input_str;

    string max_string = maximizeString(input_str);
    cout << "Lexicographically maximum string: " << max_string << endl;

    return 0;
}
