#include <iostream>

int main() {
    int num1, num2;

    // Taking input from the user
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Adding the numbers
    int sum = num1 + num2;

    // Displaying the result
    std::cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << std::endl;

    return 0;
}
