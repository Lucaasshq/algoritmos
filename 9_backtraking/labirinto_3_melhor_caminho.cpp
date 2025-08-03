#include <iostream>
using namespace std;

int labirinto_bt(int labirinto[20][20], int linha, int coluna, int l, int c ){
    
    if (l==-1 || c==-1 || l==linha || c==coluna || labirinto[l][c]!=0){
        return 0; // rejeita
    }

    if (l==linha-1 && c==coluna-1){
        return 1; // aceita
    }

    // evitar ciclos
    labirinto[l][c] = 9;
    int ans = labirinto_bt(labirinto, linha, coluna, l+1, c)+ //abaixo 
              labirinto_bt(labirinto, linha, coluna, l, c+1)+ //direita
              labirinto_bt(labirinto, linha, coluna, l, c-1)+ //esquerda
              labirinto_bt(labirinto, linha, coluna, l-1, c); // cima

    labirinto[l][c] = 0;
    // retorno do backtraking 
    return ans;
}

int main(){
    int linha, coluna, labirinto[20][20];
    cout << "Digite a linha: ";
    cin >> linha;

    cout << "Digite a coluna: ";
    cin >> coluna;

    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            cin >> labirinto[i][j];
        }
    }

    int qtdCaminhos = labirinto_bt(labirinto, linha, coluna, 0,0);
    if (qtdCaminhos > 0)
            cout << "Labirinto tem saida e a quantidade de caminhos: " << qtdCaminhos << endl;
    else
            cout << "Labirinto sem saida. \n";
    return 0;
}