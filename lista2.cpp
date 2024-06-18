#include <iostream>

int main() {
int valores[6];
  std::cout << "Entre com 6 valores inteiros: ";
  for (int i = 0; i < 6; i++) {
    std::cin >> valores[i];
  }
  std::cout << "Leitura dos valores: " << std::endl;
  for (int i = 0; i < 6; i++) {
    std::cout << valores[i] << std::endl;
  }
  return 0;
}