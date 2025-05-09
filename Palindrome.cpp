#include <iostream>
#include <string>
#include <algorithm>

bool isPalindrome(const std::string& input) {
    std::string str = input;

    // Convert the string to lowercase
    std::transform(str.begin(), str.end(), str.begin(), ::tolower);

    // Check if the string is equal to its reverse
    std::string reversed = str;
    std::reverse(reversed.begin(), reversed.end());

    return str == reversed;
}

int main() {
    std::string word = "Madam";

    if (isPalindrome(word)) {
        std::cout << "\"" << word << "\" is a palindrome." << std::endl;
    } else {
        std::cout << "\"" << word << "\" is not a palindrome." << std::endl;
    }

    return 0;
}
