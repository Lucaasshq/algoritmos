#include <iostream>
using namespace std;

void contar_impares(int a[], int n, int impares[], int& qtd_impares ){
  for (int i = 0; i < n; i++){
    if (a[i] % 2 != 0){
      impares[qtd_impares] = a[i];
      qtd_impares++;
    }
  }
}


int main()
{
  int n, qtd_impares = 0;
  cout << "Digite o tamanho do Array: ";
  cin >> n;
  int a[n], impares[n];

  cout << "Digite os elementos separados por espaco: ";
  for (int i = 0; i < n; i++){
    cin >> a[i];
  }

  contar_impares(a, n, impares, qtd_impares);
  cout << "Quantidade de numeros imapres: " << qtd_impares << endl;
  if (qtd_impares > 0){
    cout << impares[0];
    for (int i = 1; i < qtd_impares; i++){
      cout << " " << impares[i];
    }
  }

  return 0;
}