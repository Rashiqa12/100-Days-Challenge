#include <iostream>
void tampil(int arr[], int n) {
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
}
int main() {
    int data[3] = {10, 20, 30};
    tampil(data, 3);
    return 0;
}