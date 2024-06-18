#include <iostream>
#include <unordered_set>
#include <vector>

int main() {
    const int TAMANHO = 10;
    int vetor[TAMANHO];
    std::unordered_set<int> elementos;
    std::unordered_set<int> duplicados;

    std::cout << "Digite 10 números inteiros:" << std::endl;
    for (int i = 0; i < TAMANHO; i++) {
        std::cin >> vetor[i];
        if (elementos.find(vetor[i]) != elementos.end()) {
            duplicados.insert(vetor[i]);
        } else {
            elementos.insert(vetor[i]);
        }
    }

    if (!duplicados.empty()) {
        std::cout << "Valores duplicados:" << std::endl;
        for (const auto& val : duplicados) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Nenhum valor duplicado encontrado." << std::endl;
    }

    return 0;
}
