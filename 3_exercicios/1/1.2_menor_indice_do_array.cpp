#include <iostream>
using namespace std;

int indexMenorValor(int tamanho, int lista[]){
  int index = 0;

  for (int i = 1; i < tamanho; i++){
    if (lista[i] < lista[index]){
      index = i;
    }
  }
  return index;
}


int main() {
  cout << "Teste para funcao menorArrayIndex()" << endl;
  cout << "Com os valores: {20, 50, 10, 30, 40}" << endl;
  unsigned int tamanho = 5;
  
  int lista[5] = {20, 50, 10, 30, 1};
  
  int menor = indexMenorValor(tamanho, lista);
  cout << "Indice de menor valor: " << menor << endl;
  return 0;
}