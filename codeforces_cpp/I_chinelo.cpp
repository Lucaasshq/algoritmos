#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int estoque[501];

    for (int i = 0; i < n; i++){
        cin >> estoque[i];
    }

    int p;
    cin >> p;

    int vendas = 0;

    for (int i = 0; i < p; i++){
        int pedidos;
        cin >> pedidos;

        if (pedidos >= 1 && pedidos <= n && estoque[pedidos-1] > 0){
            estoque[pedidos - 1]--;
            vendas++;
        }
    }

    cout << vendas << endl;
    


    return 0;
}