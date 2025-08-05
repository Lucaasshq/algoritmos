#include <iostream>

using namespace std;

const int infinito = 99999999;

int resolver(int i, int j, int n, int m, int matriz[16][16], int memo[16][16]) {
    if (j < 0 || j >= m) {
        return infinito;
    }

    if (i == 0) {
        return matriz[i][j];
    }

    if (memo[i][j] != -1) {
        return memo[i][j];
    }

    int esforco_esquerda = resolver(i - 1, j - 1, n, m, matriz, memo);
    int esforco_meio = resolver(i - 1, j, n, m, matriz, memo);
    int esforco_direita = resolver(i - 1, j + 1, n, m, matriz, memo);

    int menor_esforco_futuro = esforco_esquerda;
    if (esforco_meio < menor_esforco_futuro) {
        menor_esforco_futuro = esforco_meio;
    }
    if (esforco_direita < menor_esforco_futuro) {
        menor_esforco_futuro = esforco_direita;
    }

    int esforco_total = matriz[i][j] + menor_esforco_futuro;
    memo[i][j] = esforco_total;

    return esforco_total;
}

int main() {
   

    int n, m;
    int matriz[16][16];
    int memo[16][16];

    cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matriz[i][j];
            memo[i][j] = -1;
        }
    }

    int menor_esforco_total = infinito;
    int linha_inicial = n - 1;

    for (int j = 0; j < m; ++j) {
        int esforco_atual = resolver(linha_inicial, j, n, m, matriz, memo);
        if (esforco_atual < menor_esforco_total) {
            menor_esforco_total = esforco_atual;
        }
    }

    cout << menor_esforco_total << endl;

    return 0;
}