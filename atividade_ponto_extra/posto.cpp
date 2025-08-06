#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

int menorTempoAbastecimento(const vector<int>& postos, const vector<int>& tempos, int distanciaFinal) {
    int n = postos.size();
    const int AUTONOMIA = 100;
    const int INF = INT_MAX;

    vector<int> T(n, INF);
    T[0] = 0; // Começamos abastecendo no posto 0 (na origem)

    // Construção da tabela DP
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (postos[i] - postos[j] <= AUTONOMIA && T[j] != INF) {
                // Atualiza T[i] com o menor tempo possível vindo de algum posto anterior
                T[i] = min(T[i], T[j] + tempos[i]);
            }
        }
    }

    // Verifica os postos que permitem chegar até o final (C2) com 100km
    int menorTempo = INF;
    for (int i = 0; i < n; ++i) {
        if (distanciaFinal - postos[i] <= AUTONOMIA && T[i] != INF) {
            menorTempo = min(menorTempo, T[i]);
        }
    }

    return (menorTempo == INF) ? -1 : menorTempo;
}


int main() {
    // --- Configurando o Caso de Teste 1 ---
    // Parâmetros do problema conforme o teste.
    cout << "Executando o Caso de Teste 1: Caminho Simples" << endl;

    int distancia_c2 = 250;
    
    vector<int> postos_dist;
    vector<int> tempos_parada;

    // Adicionando a origem C1 (distância 0, tempo 0) na primeira posição.
    postos_dist.push_back(0);
    tempos_parada.push_back(0);

    // Adicionando os postos do Caso de Teste 1.
    postos_dist.push_back(90);  // P1
    tempos_parada.push_back(10); // t1

    postos_dist.push_back(180); // P2
    tempos_parada.push_back(5);  // t2

    // --- Chamando a função e mostrando o resultado ---
    int resultado = menorTempoAbastecimento(postos_dist, tempos_parada, distancia_c2);

    if (resultado != -1) {
        cout << "O menor tempo possivel gasto nos postos e: " << resultado << " minutos." << endl;
    } else {
        cout << "Nao e possivel chegar a cidade C2." << endl;
    }

    return 0;
}