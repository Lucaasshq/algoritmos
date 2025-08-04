#include <iostream>
using namespace std;

int soma_sublista_bt(int* a, int tam, int soma){
    if (soma == 0) return 1; // aceita
    if (soma < 0 || tam < 0) return 0; // rejeita
   int r1 = soma_sublista_bt(a, tam-1, soma-a[tam-1]);
   int r2 = soma_sublista_bt(a, tam-1, soma);
    return r1+r2;
}

int main(){
    int* a, tam, soma;
    cin >> tam >> soma;
    a = new int[tam];

    for (int i = 0; i < tam; i++){
        cin >> a[i];
    }
    int qtd = soma_sublista_bt(a, tam, soma);
    
    cout << "Existem: " << qtd << " sublistas de soma S." << endl;
    delete a;
    return 0;
}