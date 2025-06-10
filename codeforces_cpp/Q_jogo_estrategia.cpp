#include <iostream>

int main() {
    using namespace std; 

    int J, R;
    cin >> J >> R;

    static int pontuacoes[500]; 
    // Garante que todas as pontuações comecem em zero
    for (int i = 0; i < 500; ++i) {
        pontuacoes[i] = 0;
    }

    int total_jogadas = J * R;

    for (int i = 0; i < total_jogadas; ++i) {
        int pontos_vitoria;
        cin >> pontos_vitoria;
        pontuacoes[i % J] += pontos_vitoria;
    }

    int maior_pontuacao = -1;
    int jogador_vencedor = -1;

    
    for (int i = 0; i < J; ++i) {
        if (pontuacoes[i] >= maior_pontuacao) { 
            maior_pontuacao = pontuacoes[i];
            jogador_vencedor = i + 1;
        }
    }

    cout << jogador_vencedor << "\n";

    return 0;
}