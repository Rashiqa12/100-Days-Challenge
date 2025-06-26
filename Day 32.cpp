#include <iostream>

int main() {

  int nilai[] = {75, 80, 90, 65, 85};

  int total = 0;

  for (int i = 0; i < 5; i++) {

    total += nilai[i];

  }

  double rata_rata = total / 5.0;

  if (rata_rata > 75) {

    std::cout << "Lulus" << std::endl;

  } else {

    std::cout << "Tidak Lulus" << std::endl;

  }

  return 0;

}