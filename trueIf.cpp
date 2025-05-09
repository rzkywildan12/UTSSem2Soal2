#include <iostream>

bool isEven(int n) {
    return n % 2 == 0;
}

int main() {
    int number;

    //Example usage
    number = 1000;
    std::cout << number << " + isEven : " << std::boolalpha <<
isEven(number) << std::endl;

number = 1001;
std::cout << number << " = isEven :" << std::boolalpha <<
isEven(number) << std::endl;
}
