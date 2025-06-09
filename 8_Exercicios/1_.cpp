#include <iostream>
#include <chrono>
const int INITIAL_CAPACITY = 8;
// Função para aumentar a capacidade do array
int* increase_capacity(int* data, int& capacity, int& size) {
    int new_capacity = capacity * 2;
    int* new_array = new int[new_capacity];

    for (int i = 0; i < size; ++i)
        new_array[i] = data[i];

    delete[] data;
    capacity = new_capacity;
    return new_array;
}
// Função para inserir valor no final (como push_back)
int* push_back(int* data, int& capacity, int& size, int value) {
    if (size == capacity)
        data = increase_capacity(data, capacity, size);

    data[size++] = value;
    return data;
}
int main() {
    int* data;
    int size = 0, capacity = INITIAL_CAPACITY, x;

    auto beg = std::chrono::high_resolution_clock::now();

    data = new int[capacity];  // alocação inicial

    while (std::cin >> x, x != -1)  // lê até digitar -1
        data = push_back(data, capacity, size, x);

    auto end = std::chrono::high_resolution_clock::now();

    std::cout << "Quantidade de números lidos: " << size << std::endl;
    std::cout << "Tamanho do vetor: " << capacity << std::endl;

    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - beg);
    std::cerr << "Tempo de processamento: " << duration.count() << " microseconds(s)" << std::endl;
    delete[] data;  // libera a memória alocada
    return 0;
}
