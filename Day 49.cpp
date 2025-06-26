#include <iostream>
int main() {
    int data[5] = {2, 8, 4, 1, 9}, maks = data[0];
    for (int i = 1; i < 5; i++)
        if (data[i] > maks) maks = data[i];
    std::cout << "Nilai terbesar: " << maks;
    return 0;
}