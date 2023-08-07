#include <iostream>

int main() {
    int num1, num2, num3;

    // Taking input from the user
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    std::cout << "Enter the third number: ";
    std::cin >> num3;

    // Finding the largest number
    int largest = num1;

    if (num2 > largest) {
        largest = num2;
    }

    if (num3 > largest) {
        largest = num3;
    }

    // Displaying the result
    std::cout << "The largest number is: " << largest << std::endl;

    return 0;
}
