#include <iostream>
#include <stdexcept>

int divide(int a, int b) {
    if (b == 0) {
        throw std::invalid_argument("Division by zero is not allowed.");
    }
    return a / b;
}

int main() {
    try {
        std::cout << "Result: " << divide(10, 0) << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}
