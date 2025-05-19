#include <iostream>
#include <cmath>
#include <chrono>
using namespace std;
using namespace std::chrono;

bool existeParComSoma(long long a[], long long n, long long s)
{
  for (long long i = 0; i < n; i++)
  {
    for (long long j = i + 1; j < n; j++)
    {
      if (a[i] + a[j] == s)
      {
        return true;
      }
    }
  }
  return false;
}

void testeSubLista(long long a[], long long n, long long s)
{
  auto inicio = high_resolution_clock::now();

  long long resultado = existeParComSoma(a, n, s);

  auto fim = high_resolution_clock::now();

  auto duracao = duration_cast<microseconds>(fim - inicio);

  cout << "Teste " << 5 << ": ";
  if (resultado)
  {
    cout << "SIM\n";
  }
  else
  {
    cout << "NAO\n";
  }

  cout << "Tempo de execucao: " << duracao.count() << " microssegundos" << endl;
}

int main()
{
  long long tamanho1 = 1000;
  long long *arr1 = new long long[tamanho1];
  for (long long i = 0; i < tamanho1; i++)
    arr1[i] = i * 2;

  long long tamanho2 = 10000;
  ;
  long long *arr2 = new long long[tamanho2];
  for (long long i = 0; i < tamanho2; i++)
    arr2[i] = i * 2;

  long long tamanho3 = 100000;
  ;
  long long *arr3 = new long long[tamanho3];
  for (long long i = 0; i < tamanho3; i++)
    arr3[i] = i * 10;

  testeSubLista(arr1, tamanho1, 10055);
  testeSubLista(arr2, tamanho2, 150055);
  testeSubLista(arr3, tamanho3, 1040005);

  return 0;
}
