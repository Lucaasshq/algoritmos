#include <iostream>
using namespace std;

const int infinito = 99999;

int labirinto_bt(int labirinto[20][20], int linha, int coluna, int l, int c ){
    
    if (l==-1 || c==-1 || l==linha || c==coluna || labirinto[l][c]!=0){
        return infinito; // rejeita
    }

    if (l==linha-1 && c==coluna-1){
        return 1; // aceita
    }

    // evitar ciclos
    
      labirinto[l][c] = 9;
      int caminho_baixo = labirinto_bt(labirinto, linha, coluna, l+1, c); //abaixo 
      int caminho_direita =  labirinto_bt(labirinto, linha, coluna, l, c+1); //direita
      int caminho_esquerda = labirinto_bt(labirinto, linha, coluna, l, c-1); //esquerda
      int caminho_cima =  labirinto_bt(labirinto, linha, coluna, l-1, c); // cima
      labirinto[l][c] = 0;

    int menor_caminho = caminho_baixo;
    if (caminho_direita < menor_caminho){
        menor_caminho = caminho_direita;
    }

    if (caminho_esquerda < menor_caminho){
        menor_caminho = caminho_esquerda;
    }

    if (caminho_cima < menor_caminho){
        menor_caminho = caminho_cima;
    }

    if (menor_caminho == infinito){
        return infinito;
    }

   
    // retorno do backtraking 
    return menor_caminho + 1;
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


    int menorCaminho = labirinto_bt(labirinto, linha, coluna, 0,0);
    if (menorCaminho != infinito)
            cout << "Labirinto tem saida e o menor caminho é:  " << menorCaminho << endl;
    else
            cout << "-1" << endl;
    return 0;
}