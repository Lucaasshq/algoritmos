#include <iostream>
using namespace std;

int contar_divisores(int n)
{
  int d = 1, qtd = 1;
  while (d != n)
    if ((n % d++) == 0)
      qtd++;

  return qtd;
}

int main()
{
  int num;
  cin >> num;
  int resultado = contar_divisores(num);

  cout << resultado << endl;
  return 0;
}