#include <iostream>
#include <vector>
#include <climits>


using namespace std;

int troco_com_memoria(int c[], int num_c, int v, vector<int>& memoria) {

    if (memoria[v] != -1) {
        return memoria[v];
    }

    // Seus casos base originais
    if (v == 0) {
        return 0;
    }
    if (v < 0) {
        return INT_MAX;
    }

    int minMoedas = INT_MAX;

    for (int i = 0; i < num_c; ++i) {
        int moeda_atual = c[i];
        
        int res = troco_com_memoria(c, num_c, v - moeda_atual, memoria);

        if (res != INT_MAX) {
            if (res + 1 < minMoedas) {
                minMoedas = res + 1;
            }
        }
    }

    memoria[v] = minMoedas;

    return minMoedas;
}

int main(){
    int cMoeda[] = {1, 2, 3};
    int numMoedas = 3;
    int valor = 13;

    vector<int> memo(valor + 1, -1);

  
    int result = troco_com_memoria(cMoeda, numMoedas, valor, memo);

    if (result != INT_MAX){
       
        cout << "A quantidade minima de moedas é :" << result << endl;
    } else {
        cout << "Não foi possivel forma o valor com as moedas dadas." << endl;
    }
    return 0;
}