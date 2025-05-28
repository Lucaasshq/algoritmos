#include <iostream>
using namespace std;

bool cabeNaPagina(int larguraPagina, int alturaPagina, int largura1, int altura1, int largura2, int altura2){
    int maiorAltura = (altura1 > altura2) ? altura1 : altura2;
    int maiorLargura = (largura1 > largura2) ? largura1 : largura2;
    
    return (largura1 + largura2 <= larguraPagina && maiorAltura <= alturaPagina) ||
           (maiorLargura <= larguraPagina && altura1 + altura2 <= alturaPagina);
}
int main() {

    int larguraPagina, alturaPagina;
    int larguraFoto1, alturaFoto1;
    int larguraFoto2, alturaFoto2;

    cin >> larguraPagina >> alturaPagina;
    cin >> larguraFoto1 >> alturaFoto1;
    cin >> larguraFoto2 >> alturaFoto2;
    
    bool podeColar = false;

    int fotos[4][2] = {
        {larguraFoto1, alturaFoto1},
        {alturaFoto1, larguraFoto1},
        {larguraFoto2, alturaFoto2},
        {alturaFoto2, larguraFoto2}
    };

    for (int i = 0; i < 2; i++){
        for (int j = 2; j < 4; j++){
            if(cabeNaPagina(larguraPagina, alturaPagina,
                            fotos[i][0], fotos[i][1],
                            fotos[j][0], fotos[j][1])){
            podeColar = true;
            break;
            }
        }
        if (podeColar) break;
    }

    cout << (podeColar ? 'S' : 'N') << endl;

    return 0;
}