#include <iostream> // Para entrada e saída (cin, cout)
#include <vector>   // Para usar std::vector para armazenar os batimentos
#include <numeric>  // Para usar std::accumulate (não estritamente necessário mas útil)
#include <cmath>    // Para usar round() - mas vamos mudar para truncamento

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N; // Número de medições
    std::cin >> N;

    std::vector<int> batimentos(N); // Vetor para armazenar os batimentos
    long long soma_batimentos = 0;   // Variável para somar os batimentos

    for (int i = 0; i < N; ++i) {
        std::cin >> batimentos[i];
        soma_batimentos += batimentos[i];
    }

    
    double media_exata = static_cast<double>(soma_batimentos) / N;

    
    int media_arredondada = static_cast<int>(media_exata);

  
    int limite_inferior_int = static_cast<int>(media_arredondada * 0.9);
    int limite_superior_int = static_cast<int>(media_arredondada * 1.1);

    int contador_fora_da_margem = 0; // Contador para medições fora da margem

 
    for (int i = 0; i < N; ++i) {

        if (batimentos[i] < limite_inferior_int || batimentos[i] > limite_superior_int) {
            contador_fora_da_margem++;
        }
    }

    std::cout << media_arredondada << std::endl;
    std::cout << contador_fora_da_margem << std::endl;

    return 0; 
}