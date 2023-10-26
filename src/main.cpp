#include <iostream>
#include <vector>

int main() {
    std::cout << "What's your name? ";
    std::string name;
    std::cin >> name;
    std::cout << "Hello, " << name << "!\n";
    std::cout << "1 / 0 = " << 1. / 0 << std::endl;
    return 0;
}