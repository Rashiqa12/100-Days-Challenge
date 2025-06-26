#include <iostream>
int main() {
    char grade = 'B';
    switch (grade) {
        case 'A': std::cout << "Sangat Baik"; break;
        case 'B': std::cout << "Baik"; break;
        case 'C': std::cout << "Cukup"; break;
        default: std::cout << "Tidak diketahui";
    }
    return 0;
}