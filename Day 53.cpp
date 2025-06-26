#include <iostream>
int main() {
    int data[] = {10, 20, 30};
    int total = 0;
    for (int i = 0; i < 3; i++) total += data[i];
    std::cout << "Rata-rata: " << total / 3;
    return 0;
}