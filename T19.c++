#include <iostream>
#include <string>

int main() {
    std::string str1 = "Hello, ";
    std::string str2 = "world!";
    
    // Method 1: Using the + operator to concatenate strings
    std::string result1 = str1 + str2;
    std::cout << "Method 1: Using + operator" << std::endl;
    std::cout << "Concatenated String: " << result1 << std::endl;

    // Method 2: Using the += operator to concatenate strings
    std::string result2 = str1;
    result2 += str2;
    std::cout << "Method 2: Using += operator" << std::endl;
    std::cout << "Concatenated String: " << result2 << std::endl;

    return 0;
}
