#include <iostream>
using namespace std;

bool existe_caminho(int labirinto[20][20], int linha, int coluna, int l, int c, int fimL, int fimC ){
    
    if (l<0 || c<0 || l>=linha || c>=coluna || labirinto[l][c]!=0){
        return false; // rejeita
    }

    if (l==fimL && c==fimC){
        return true; // aceita
    }

    // evitar ciclos
      labirinto[l][c] = 9;
      bool achou = existe_caminho(labirinto, linha, coluna, l+1, c, fimL, fimC)|| //abaixo 
                   existe_caminho(labirinto, linha, coluna, l, c+1, fimL, fimC)|| //direita
                   existe_caminho(labirinto, linha, coluna, l, c-1, fimL, fimC)|| //esquerda
                   existe_caminho(labirinto, linha, coluna, l-1, c, fimL, fimC); // cima
      labirinto[l][c] = 0;

    // retorno do backtraking 
    return achou;
}

int main(){
    int linha, coluna,inicioL, inicioC,fimL, fimC, labirinto[20][20];
    cout << "Digite a linha e em seguida coluna: ";
    cin >> linha >> coluna;

    cout << "Digite a cordenada de inicio: ";
    cin >> inicioL >> inicioC;

    cout << "Digite a cordenada do fim: ";
    cin >> fimL >> fimC;

    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            cin >> labirinto[i][j];
        }
    }



    int existe = existe_caminho(labirinto, linha, coluna, inicioL, inicioC, fimL, fimC);
    if (existe)
            cout << "Da pra se deslocar entre duas celular." << endl;
    else
            cout << "Não da pra se deslocar entre duas celular." << endl;
    return 0;
}