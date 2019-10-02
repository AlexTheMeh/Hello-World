#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "Welcome to my program!" << std::endl; //The lowercase letter L and the digit One look the same

    int a = 0;
    int b = 0;

    std::cout << "Please enter a number: " << std::endl;
    std::cin >> a; //user input is assigned to variable a

    std::cout << "Please enter another number: " << std::endl;
    std::cin >> b;

    std::cout << "The total of your two numbers added together is: " << a + b << std::endl;
    return 0;
}