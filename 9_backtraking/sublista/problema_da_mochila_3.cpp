#include <iostream>
#include <vector>
using namespace std;

struct item{
    double valor;
    int peso;
};


double mochila(vector<item> itens, int q, int peso){
    int ans = 0;
    int i = 0;
    int peso_total = itens[i].peso;
    
    if (peso_total >= peso){
        return 0.0;

    } else {
    
    i = i+1;
    int proximo = mochila(itens.[i], q, peso);
    }
        
    
    return ans;
}

int main(){
    int tam, peso_maximo;
    cin >> tam >> peso_maximo;

    vector<item> itens(tam);
    for (Item & i: itens){
        cin >> i.peso >> i.valor;
    }
    double valor = mochila(itens, tam, peso_maximo);
    
    
    
    return 0;
}