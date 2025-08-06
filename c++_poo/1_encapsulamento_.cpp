#include <iostream>
#include <vector>
using namespace std;

int contarFormasOrdenadas(int V, const vector<int>& moedas) {
    vector<int> dp(V + 1, 0);  // dp[i] representa o número de formas de obter o valor i
    dp[0] = 1; // 1 forma de fazer 0: não usar nenhuma moeda

    // Preenche a tabela dp do valor 1 até V
    for (int v = 1; v <= V; ++v) {
        for (int moeda : moedas) {
            if (moeda <= v) {
                dp[v] += dp[v - moeda]; // soma as formas de chegar até (v - moeda)
            }
        }
    }

    return dp[V];
}

int main() {
    vector<int> moedas = {2, 3, 5};
    int V = 9;

    int resultado = contarFormasOrdenadas(V, moedas);

    cout << "Número de formas distintas e ordenadas de obter " << V << ": " << resultado << endl;

    return 0;
}
