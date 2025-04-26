#include <iostream>
using namespace std;

void contar_pares(int a[], int n, int pares[], int& qtd_pares ){
  for (int i = 0; i < n; i++){
    if (a[i] % 2 == 0){
      pares[qtd_pares] = a[i];
      qtd_pares++;
    }
  }
}


int main()
{
  int n, qtd_pares = 0;
  cout << "Digite o tamanho do Array: ";
  cin >> n;
  int a[n], pares[n];

  cout << "Digite os elementos separados por espaco: ";
  for (int i = 0; i < n; i++){
    cin >> a[i];
  }

  contar_pares(a, n, pares, qtd_pares);
  cout << "Quantidade de numeros impares: " << qtd_pares << endl;
  if (qtd_pares > 0){
    cout << pares[0];
    for (int i = 1; i < qtd_pares; i++){
      cout << " " << pares[i];
    }
  }

  return 0;
}