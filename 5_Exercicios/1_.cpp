#include <iostream>
#include <cmath>
using namespace std;

int diferenca(int a[], int tamanho){
  int diferenca_maxima = 0;

  for (int i = 0; i < tamanho - 1; i++){
    int diferenca = abs(a[i + 1] + a[i]);
    if (diferenca > diferenca_maxima){
      diferenca_maxima = diferenca;
    }
  }

  return diferenca_maxima;
}

int main(){
    int tamanho;
    cout << "Digite o tamanho do array";
    cin >> tamanho;
    int a[tamanho];

    cout << "Digite os elementos separados por espaco: ";
    for (int i = 0; i < tamanho; i++){
    cin >> a[i];
    }

  int resultado = diferenca(a, tamanho);
  cout << resultado << endl;
}