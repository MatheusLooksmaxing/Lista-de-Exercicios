#include <iostream>

int main() {
    const int LINHAS = 3;
    const int COLUNAS = 3;
    int matriz[LINHAS][COLUNAS];

    std::cout << "Digite os elementos da matriz 3x3:" << std::endl;
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            std::cin >> matriz[i][j];
        }
    }

    int soma = 0;
    for (int i = 1; i < LINHAS; i++) {
        for (int j = 0; j < i; j++) {
            soma += matriz[i][j];
        }
    }

    std::cout << "Soma dos elementos abaixo da diagonal principal: " << soma << std::endl;

    return 0;
}
