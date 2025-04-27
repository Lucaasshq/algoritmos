#include <iostream>
using namespace std;

bool ordenado_crescente(int a[], int n)
{

  for (int i = 0; i < n - 1; i++)
  {
    if (a[i] > a[i + 1])
    {
      return false;
    }
  }
  return true;
}

int main()
{
  // Casos de teste
  int teste1[] = {1, 2, 3, 4, 5}; 
  int teste2[] = {5, 4, 3, 2, 1}; 
  int teste3[] = {1, 1, 2, 2, 3}; 
  int teste4[] = {10};            
  int teste5[] = {2, 2, 2, 2, 2};

  cout << "Teste 1: " << (ordenado_crescente(teste1,5) ? "Ordenado" : "Nao ordenado") << endl;
  cout << "Teste 2: " << (ordenado_crescente(teste2,5) ? "Ordenado" : "Nao ordenado") << endl;
  cout << "Teste 3: " << (ordenado_crescente(teste3, 5) ? "Ordenado" : "Nao ordenado") << endl;
  cout << "Teste 4: " << (ordenado_crescente(teste4, 1) ? "Ordenado" : "Nao ordenado") << endl;
  cout << "Teste 5: " << (ordenado_crescente(teste5, 5) ? "Ordenado" : "Nao ordenado") << endl;

  return 0;
}