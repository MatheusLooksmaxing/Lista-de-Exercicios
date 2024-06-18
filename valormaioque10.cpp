#include <iostream>

int main() {
    int matriz[4][4];
    int count = 0;

    std::cout << "Digite os elementos da matriz 4x4:" << std::endl;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            std::cin >> matriz[i][j];
            if(matriz[i][j] > 10) {
                count++;
            }
        }
    }

    std::cout << "Quantidade de valores maiores que 10: " << count << std::endl;

    return 0;
}
