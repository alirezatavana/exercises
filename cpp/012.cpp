#include <iostream>

int main() {
    int number_one = 100;
    int number_two = 200;
    int temporary = 0;
    std::cout << number_one << std::endl;
    std::cout << number_two << std::endl;
    temporary = number_one;
    number_one = number_two;
    number_two = temporary;
    std::cout << number_one << std
    std::cout << number_two;
    return 0;
}