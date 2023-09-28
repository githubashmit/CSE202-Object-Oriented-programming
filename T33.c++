#include <iostream>
#include <string>
int main() {
    std::string str = "Hello, World!";
    str.replace(7, 5, "Universe");
    std::cout << str;
    return 0;
}