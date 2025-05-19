#include <iostream>


int calcularDiasParaInfectarTodos(int populacao) {
    int infectados = 1;
    int dias = 0;

    while (infectados < populacao) {
        infectados *= 2;
        dias++;
    }

    return dias;
}

int main() {
    int populacao;

    std::cout << "Digite a populacao da cidade: ";
    std::cin >> populacao;

    int dias = calcularDiasParaInfectarTodos(populacao);

    std::cout << "Todos estarao infectados em " << dias << " dia(s)." << std::endl;

    return 0;
}
