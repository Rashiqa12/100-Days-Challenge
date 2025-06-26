#include <iostream>
float konversi(float c) { return (c * 9/5) + 32; }
int main() {
    std::cout << konversi(25) << " F";
    return 0;
}