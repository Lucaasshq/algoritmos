#include <iostream>
#include <vector>
using namespace std;

/*
 * f(v) = número de formas ordenadas de obter v usando moedas
 * f(0) = 1
 * f(v) = soma de f(v - c_i) para cada moeda c_i que pode ser usada
 */
int f(int v, const vector<int>& moedas) {
    if (v == 0) return 1;  // caso base
    if (v < 0) return 0;   // valor impossível

    int total = 0;
    for (int c : moedas) {
        total += f(v - c, moedas);
    }

    return total;
}

int main() {
    vector<int> moedas = {2, 3, 5};
    int V = 9;

    int resultado = f(V, moedas);

    cout << "Número de formas distintas e ordenadas de obter " << V << ": " << resultado << endl;

    return 0;
}
