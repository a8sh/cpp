#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>


std::string lexicographically_maximum_string(const std::string& input_str) {
    std::unordered_map<char, int> last_occurrence;
    for (int i = 0; i < input_str.size(); ++i) {
        last_occurrence[input_str[i]] = i;
    }

    std::vector<char> result;
    std::unordered_set<char> used_chars;
    for (int i = 0; i < input_str.size(); ++i) {
        char char_at_i = input_str[i];
        while (!result.empty() && char_at_i > result.back() && i < last_occurrence[result.back()]) {
            used_chars.erase(result.back());
            result.pop_back();
        }
        if (used_chars.find(char_at_i) == used_chars.end()) {
            result.push_back(char_at_i);
            used_chars.insert(char_at_i);
        }
    }

    return std::string(result.begin(), result.end());
}

int main() {
    std::string input_str;
    std::cin>>input_str;
    std::string result = lexicographically_maximum_string(input_str);
    std::cout << result << std::endl;  // Output: "acb"
    return 0;
}