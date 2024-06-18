#include <iostream>
#include <vector>
#include <unordered_set>

int main() {
    const int TAMANHO = 20;
    int vetor[TAMANHO];
    std::vector<int> vetor_sem_repetidos;
    std::unordered_set<int> conjunto;

    std::cout << "Digite 20 números inteiros:" << std::endl;
    for (int i = 0; i < TAMANHO; i++) {
        std::cin >> vetor[i];
    }

    for (int i = 0; i < TAMANHO; i++) {
        if (conjunto.find(vetor[i]) == conjunto.end()) {
            conjunto.insert(vetor[i]);
            vetor_sem_repetidos.push_back(vetor[i]);
        }
    }

    std::cout << "Vetor sem elementos repetidos:" << std::endl;
    for (int i = 0; i < vetor_sem_repetidos.size(); i++) {
        std::cout << vetor_sem_repetidos[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
