#include <iostream>
#include <string>

std::string removeFirstOccurrence(const std::string& original, const std::string& search) {
    std::string result = original;
    size_t pos = result.find(search);
    if (pos != std::string::npos) {
        result.erase(pos, search.length());
    }
    return result;
}

int main() {
    std::string str = "Hello world";
    std::string search = "ell";

    std::string result = removeFirstOccurrence(str, search);
    std::cout << result << std::endl;  // Output: "Ho world"

    return 0;
}
