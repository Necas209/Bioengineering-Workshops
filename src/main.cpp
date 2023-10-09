#include <iostream>
#include <vector>

int main() {
    std::cout << "What's your name?" << std::endl;
    std::string name;
    std::cin >> name;
    std::cout << "Hello, " << name << "!\n";
    return 0;
}