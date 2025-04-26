#include <iostream>
using namespace std;

int IndexMaiorValor(int tamanho, int lista[]){
  int index = 0;

  for (int i = 1; i < tamanho; i++){
    if (lista[i] > lista[index]){
      index = i;
    }
  }
  return index;
}


int main() {
  unsigned int tamanho;
  cout << "Digite o tamanho do array: ";
  cin >> tamanho;
  int lista[tamanho];
  
  cout << "Insira os valores separados por espacos: ";
  for (unsigned int i = 0; i < tamanho; i++) {
      cin >> lista[i];
  }
  
  int maior = IndexMaiorValor(tamanho, lista);
  cout << "Indice de maior valor: " <<maior << endl;
  return 0;
}