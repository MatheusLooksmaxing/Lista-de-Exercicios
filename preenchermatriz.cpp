#include <iostream>

int main() {
    const int LINHAS = 5;
    const int COLUNAS = 5;

    int matriz[LINHAS][COLUNAS];

    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            matriz[i][j] = i * j;
        }
    }

    std::cout << "Matriz preenchida com o produto da linha e da coluna:" << std::endl;
    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            std::cout << matriz[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    return 0;
}
