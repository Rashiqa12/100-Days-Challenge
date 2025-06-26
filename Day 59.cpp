#include <iostream>
int main() {
    int a = 5, b = 3, temp;
    temp = a; a = b; b = temp;
    std::cout << "a: " << a << ", b: " << b;
    return 0;
}