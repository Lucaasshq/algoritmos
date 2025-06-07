#include <iostream> // Inclui apenas a biblioteca iostream

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N; 
    std::cin >> N;

    int* numeros = new int[N];
    long long soma_total = 0; 
    for (int i = 0; i < N; ++i) {
        std::cin >> numeros[i];
        soma_total += numeros[i];
    }

    double media_calculada = static_cast<double>(soma_total) / N;

    long long media_arredondada_x10 = static_cast<long long>((media_calculada * 10.0) + 0.5);

    std::cout << media_arredondada_x10 / 10 << ".";
    
    std::cout << media_arredondada_x10 % 10 << std::endl;

    int count_abaixo = 0;

    for (int i = 0; i < N; ++i) {
        if (numeros[i] < media_calculada) {
            count_abaixo++;
        }
    }
    std::cout << count_abaixo; 
    for (int i = 0; i < N; ++i) {
        if (numeros[i] < media_calculada) {
            std::cout << " " << numeros[i];
        }
    }
    std::cout << std::endl;

    int count_acima_ou_igual = 0;
    
    for (int i = 0; i < N; ++i) {
        if (numeros[i] >= media_calculada) {
            count_acima_ou_igual++;
        }
    }
    std::cout << count_acima_ou_igual; 
    for (int i = 0; i < N; ++i) {
        if (numeros[i] >= media_calculada) {
            std::cout << " " << numeros[i];
        }
    }
    std::cout << std::endl;

  
    delete[] numeros;

    return 0; 
}