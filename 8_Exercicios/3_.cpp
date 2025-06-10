#include <iostream>

int find_index(int* data, int size, int x) {
    for (int i = 0; i < size; ++i) {
        if (data[i] == x)
            return i; // Retorna o índice onde encontrou o valor
    }
    return -1; // Se não encontrar, retorna -1
}


int main() {
    int data[] = {10, 20, 30, 40, 50};
    int size = 5;

    int valor = 30;
    int indice = find_index(data, size, valor);

    if (indice != -1)
        std::cout << "Valor " << valor << " encontrado no índice " << indice << std::endl;
    else
        std::cout << "Valor " << valor << " não encontrado na lista." << std::endl;

    return 0;
}
