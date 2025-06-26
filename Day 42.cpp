#include <iostream>
int main() {
    int data[4] = {2, 3, 4, 1}, total = 0;
    for (int i = 0; i < 4; i++) total += data[i];
    std::cout << "Jumlah: " << total;
    return 0;
}