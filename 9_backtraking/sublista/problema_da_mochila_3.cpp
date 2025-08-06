#include <iostream>
#include <vector>
using namespace std;

struct item {
    double valor;
    int peso;
};

double mochila(const vector<item>& itens, int i, int peso_restante) {
    if (i == itens.size()) return 0.0;

    double sem_item = mochila(itens, i + 1, peso_restante);

    double com_item = 0.0;
    if (itens[i].peso <= peso_restante) {
        com_item = itens[i].valor + mochila(itens, i + 1, peso_restante - itens[i].peso);
    }

    return max(sem_item, com_item);
}

int main() {
    int n, capacidade;
    cin >> n >> capacidade;

    vector<item> itens(n);
    for (item& i : itens) {
        cin >> i.peso >> i.valor;
    }

    double resultado = mochila(itens, 0, capacidade);

    long long arredondado = resultado * 100 + 0.5;
    cout << arredondado / 100 << '.';
    int centavos = arredondado % 100;
    if (centavos < 10) cout << '0';
    cout << centavos << '\n';

    return 0;
}
