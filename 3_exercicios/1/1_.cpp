#include <iostream>
using namespace std;

int maiorArray(int a[], unsigned int n){
    int resultado = a[0];
    for (unsigned int i = 1; i < n; i++) {
        if (a[i] > resultado){
            resultado = a[i];
        }
        
    }
    return resultado;
}

int main() {
    unsigned int n;
    cout << "Digite o tamanho do array: ";
    cin >> n;
    int a[n];
    
    cout << "Insira os valores separados por espacos: ";
    for (unsigned int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int maior = maiorArray(a, n);
    cout << maior << endl;
    return 0;
}