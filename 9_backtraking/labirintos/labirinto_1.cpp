#include <iostream>
using namespace std;

bool labirinto_bt(int labirinto[20][20], int linha, int coluna, int l, int c ){
    if (l < 0 or c<0 or l>=linha or c>=coluna or labirinto[l][c] != 0 ){
        return false; // rejeita
    }

    if ( l == linha-1 and c== coluna-1){
        return true; // aceita
    }
    labirinto[l][c] = 9;

    bool achou = labirinto_bt(labirinto, linha, coluna, l+1, c)||
    labirinto_bt(labirinto, linha, coluna, l, c+1)||
    labirinto_bt(labirinto, linha, coluna, l, c-1)||
    labirinto_bt(labirinto, linha, coluna, l-1, c);

     labirinto[l][c] = 0;

    // Nenhuma das operações chegou ao final 
    return achou;
}

int main(){
    int linha, coluna, labirinto[20][20];
    cin >> linha >> coluna;

    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            cin >> labirinto[i][j];
        }
    }

    if (labirinto_bt(labirinto,linha, coluna,0,0)){
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
    
    return 0;
}