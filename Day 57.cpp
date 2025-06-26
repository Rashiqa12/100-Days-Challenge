#include <iostream>
int main() {
    int tahun = 2024;
    if ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0))
        std::cout << "Tahun kabisat";
    else std::cout << "Bukan tahun kabisat";
    return 0;
}