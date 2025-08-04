#include <iostream>
#include <vector>
using namespace std;

struct resposta{
    bool existe;
    vector<int> sublista;
};


resposta soma_sublista_bt(vector<int> &a, int tam, int soma){
    if (soma == 0) return {true, {}}; // aceita
    if (soma < 0 || tam == 0) return {false, {}}; // rejeita
    
    resposta r1 = soma_sublista_bt(a, tam-1, soma-a[tam-1]);
    if (r1.existe){
        r1.sublista.push_back(a[tam-1]);
    } else {
      r1 = soma_sublista_bt(a, tam-1, soma);  
    }
    return r1;
}

int main(){
    int tam, soma;
    cin >> tam >> soma;
    vector<int> a(tam);

    for (int i = 0; i < tam; i++){
        cin >> a[i];
    }
    resposta resultado = soma_sublista_bt(a, tam, soma);
    if (resultado.existe){
        cout << "Existem: " << soma << ": [ ";
        for (int i = 0; i < resultado.sublista.size(); i++){
            cout << resultado.sublista[i] << " ";
        }
        cout << "]" << endl;    
    } else {
        cout << "Não existe sublista de soma " << soma << endl;
    }
    return 0;
}