#include <iostream>
using namespace std;

int qtdNumerosImpares(int a[], int tamanho)
{
  int qtdImpares = 0;
  for (int i = 0; i < tamanho; i++)
  {
    if (a[i] % 2 != 0)
    {
      cout << "Numeros impares: " << a[i] << endl;
      qtdImpares++;
    }
  }
  return qtdImpares;
}

int main()
{
  int n;
  cout << "Insira o tamanho do Array: ";
  cin >> n;
  
  int a[n];
  cout << "Valor maximo 1000000" << endl;

  cout << "Insira os valores separados por espacos: ";
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  cout << "Quantidade de numeros impares: " << qtdNumerosImpares(a, n) << endl;
  return 0;
}