#include <iostream>
int main() {
    int matriks[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    std::cout << "Isi array 2 dimensi:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << matriks[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}