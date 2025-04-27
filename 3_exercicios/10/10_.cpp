#include <iostream>
using namespace std;

int numeros_distintos(int a[], int tamanho){
  int contador = 0;

  for (int i = 0; i < tamanho; i++){
    bool ehDistinto = true;

    for (int j = 0; j < i; j++){
      if (a[i] == a[j]){
        ehDistinto = false;
        break;
      }
    }

    if (ehDistinto){
      contador++;
    }
  }

  return contador;
}

int main()
{
  int tamanho = 12;
  int a[tamanho] = {1, 3, 9, 15, 9, 6, 8, 11, 4, 11, 1, 9};

  int resultado = numeros_distintos(a, tamanho);
  cout << "Existe: "<< resultado << " numeros distintos"<< endl;

  return 0;
}