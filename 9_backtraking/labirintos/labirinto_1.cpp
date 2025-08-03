#include <iostream>
using namespace std;

bool labirinto_bt(int labirinto[20][20], int linha, int coluna, int l, int c ){
    if (l < 0 or c<0 or l>=linha or c>=coluna or labirinto[l][c] == 1 ){
        return false; // rejeita
    }

    if ( l == linha-1 and c== coluna-1){
        return true; // aceita
    }

    if(labirinto_bt(labirinto, linha, coluna, l+1, c)){ // Caminho para abaixo
        return true;
    }

    if (labirinto_bt(labirinto, linha, coluna, l, c+1)) { // caminho direita
        return true;
    }

    // Nenhuma das operações chegou ao final 
    return false;
}

int main(){
    int linha, coluna, labirinto[20][20];
    cout << "Digite a linha" << endl;
    cin >> linha;

    cout << "Digite a coluna" << endl;
    cin >> coluna;

    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            cin >> labirinto[i][j];
        }
    }
    return 0;
}