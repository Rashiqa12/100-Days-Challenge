#include <iostream>
int main() {
    int n = 7, faktor = 0;
    for (int i = 1; i <= n; i++)
        if (n % i == 0) faktor++;
    if (faktor == 2) std::cout << "Prima";
    else std::cout << "Bukan prima";
    return 0;
}