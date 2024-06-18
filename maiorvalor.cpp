#include <iostream>

int main() {
    const int LINHAS = 4;
    const int COLUNAS = 4;
    int matriz1[LINHAS][COLUNAS];
    int matriz2[LINHAS][COLUNAS];
    int matriz3[LINHAS][COLUNAS];

    std::cout << "Digite os elementos da primeira matriz 4x4:" << std::endl;
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            std::cin >> matriz1[i][j];
        }
    }

    std::cout << "Digite os elementos da segunda matriz 4x4:" << std::endl;
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            std::cin >> matriz2[i][j];
        }
    }

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            if (matriz1[i][j] > matriz2[i][j]) {
                matriz3[i][j] = matriz1[i][j];
            } else {
                matriz3[i][j] = matriz2[i][j];
            }
        }
    }

    std::cout << "Matriz resultante com os maiores valores de cada posicao:" << std::endl;
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            std::cout << matriz3[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    return 0;
}
