#include <iostream>

int* remove_element(int* data, int& size, int value) {
    // Procura o índice do elemento a ser removido
    int index = -1;
    for (int i = 0; i < size; ++i) {
        if (data[i] == value) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        std::cout << "Valor não encontrado.\n";
        return data;
    }

    // Move os elementos após o índice uma posição para a esquerda
    for (int i = index; i < size - 1; ++i) {
        data[i] = data[i + 1];
    }

    size--; // Reduz o tamanho lógico do vetor
    return data;
}


int main() {
    int capacity = 10;
    int size = 5;
    int* data = new int[capacity]{10, 20, 30, 40, 50};

    std::cout << "Antes de remover: ";
    for (int i = 0; i < size; ++i)
        std::cout << data[i] << " ";
    std::cout << "\n";

    data = remove_element(data, size, 30); // Remove o número 30

    std::cout << "Depois de remover: ";
    for (int i = 0; i < size; ++i)
        std::cout << data[i] << " ";
    std::cout << "\n";

    delete[] data;
    return 0;
}
