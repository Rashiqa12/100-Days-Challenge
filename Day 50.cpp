#include <iostream>
int main() {
    int pilihan = 1;
    switch (pilihan) {
        case 1: std::cout << "Menu 1"; break;
        case 2: std::cout << "Menu 2"; break;
        default: std::cout << "Tidak tersedia";
    }
    return 0;
}