#include <iostream>

using namespace std;

const int infinito = 99999999;
int pesos[20][20];
int memo[20][20];

int resolver(int N, int linha, int inicio_coluna) {
    int num_caixas = linha + 1;

    if (inicio_coluna < 0 || (inicio_coluna + num_caixas) > N) {
        return infinito;
    }

    if (memo[linha][inicio_coluna] != -1) {
        return memo[linha][inicio_coluna];
    }

    int peso_linha_atual = 0;
    for (int j = 0; j < num_caixas; ++j) {
        peso_linha_atual += pesos[linha][inicio_coluna + j];
    }

    if (linha == N - 1) {
        return peso_linha_atual;
    }

    int res_abaixo_1 = resolver(N, linha + 1, inicio_coluna);
    int res_abaixo_2 = resolver(N, linha + 1, inicio_coluna - 1);
    
    int menor_peso_futuro;

    if (res_abaixo_1 < res_abaixo_2) {
        menor_peso_futuro = res_abaixo_1;
    } else {
        menor_peso_futuro = res_abaixo_2;
    }

    if (menor_peso_futuro == infinito) {
         memo[linha][inicio_coluna] = infinito;
         return infinito;
    }
    
    int resultado_final = peso_linha_atual + menor_peso_futuro;
    memo[linha][inicio_coluna] = resultado_final;

    return resultado_final;
}

int main() {


    int N;
    cin >> N;
    
    if (N > 20 || N < 1) {
        return 1;
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> pesos[i][j];
            memo[i][j] = -1;
        }
    }
    
    int peso_minimo_total = infinito;

    for (int j = 0; j < N; ++j) {
        int peso_atual = resolver(N, 0, j);
        if (peso_atual < peso_minimo_total) {
            peso_minimo_total = peso_atual;
        }
    }

    cout << peso_minimo_total << endl;

    return 0;
}