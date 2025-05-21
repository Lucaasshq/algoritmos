#include <iostream>
using namespace std;

void contarOcorrencias(int n) {
    const int MAX_VAL = 100001;
    int C[MAX_VAL] = {0}; 
    int x;

   
    for (int i = 0; i < n; i++) { // O(n)
        cin >> x;
        C[x]++;
    }

   
    for (int i = 0; i < MAX_VAL; i++) { // O(1)
        if (C[i] > 0) {
            cout << "Valor " << i << " ocorre " << C[i] << " vezes\n";
        }
    }
}

int main() {
    int n;
    cin >> n;
    contarOcorrencias(n);
    return 0;
}
