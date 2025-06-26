#include <iostream>
int main() {
    char huruf = 'e';
    switch (huruf) {
        case 'a': case 'i': case 'u': case 'e': case 'o':
            std::cout << "Huruf vokal"; break;
        default: std::cout << "Bukan huruf vokal";
    }
    return 0;
}