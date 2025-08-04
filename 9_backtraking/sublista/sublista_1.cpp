#include <iostream>
using namespace std;

bool soma_sublista_bt(int* a, int tam, int soma){
    int r;
    if (soma == 0) return true; // aceita
    if (soma < 0 || tam < 0) return false; // rejeita
    r = soma_sublista_bt(a, tam-1, soma-a[tam-1]);
    r = r || soma_sublista_bt(a, tam-1, soma);
    return r;
}

int main(){
    int* a, tam, soma;
    cin >> tam >> soma;
    a = new int[tam];

    for (int i = 0; i < tam; i++){
        cin >> a[i];
    }

    if (soma_sublista_bt(a, tam, soma)){
        cout << "Existe sublista de soma." << endl;
    } else {
        cout << "Não existe sublista de soma." << endl;
    }
    delete a;
    
    return 0;
}