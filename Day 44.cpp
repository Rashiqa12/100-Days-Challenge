#include <iostream>
int main() {
    int a = 10, b = 2, hasil;
    char op = '+';
    switch (op) {
        case '+': hasil = a + b; break;
        case '-': hasil = a - b; break;
        case '*': hasil = a * b; break;
        case '/': hasil = a / b; break;
    }
    std::cout << "Hasil: " << hasil;
    return 0;
}