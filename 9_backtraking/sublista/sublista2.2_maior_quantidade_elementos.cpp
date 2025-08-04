#include <iostream>
#include <vector>

using namespace std;

struct resposta{
    bool existe;
    vector<long long> sublista;
};

resposta encontrar_maior_sublista(vector<long long>& a, int tam, long long s){
    if (s == 0) {
        return {true, {}};
    }

    if (s < 0 || tam == 0) {
        return {false, {}};
    }

    resposta com_elemento = encontrar_maior_sublista(a, tam - 1, s - a[tam - 1]);
    if (com_elemento.existe) {
        com_elemento.sublista.push_back(a[tam - 1]);
    }

    resposta sem_elemento = encontrar_maior_sublista(a, tam - 1, s);

    if (!com_elemento.existe && !sem_elemento.existe) {
        return {false, {}};
    }
    else if (!com_elemento.existe) {
        return sem_elemento;
    }
    else if (!sem_elemento.existe) {
        return com_elemento;
    }
    else {
        if (com_elemento.sublista.size() > sem_elemento.sublista.size()) {
            return com_elemento;
        } else {
            return sem_elemento;
        }
    }
}

int main(){


    int tam;
    long long s;
    
    cin >> tam >> s;

    vector<long long> a(tam);

    for (int i = 0; i < tam; i++){
        cin >> a[i];
    }

    resposta resultado = encontrar_maior_sublista(a, tam, s);

    if (resultado.existe){
        for (unsigned int i = 0; i < resultado.sublista.size(); i++){
            cout << resultado.sublista[i] << (i == resultado.sublista.size() - 1 ? "" : " ");
        }
        cout << endl;    
    } else {
        cout << 0 << endl;
    }

    return 0;
}