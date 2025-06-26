#include <iostream>
int main() {
    int data[] = {1, 4, 7, 10};
    for (int i = 0; i < 4; i++) {
        if (data[i] % 2 == 0)
            std::cout << data[i] << " genap\n";
        else
            std::cout << data[i] << " ganjil\n";
    }
    return 0;
}