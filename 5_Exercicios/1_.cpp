#include <iostream>
#include <cmath>
#include <chrono>
using namespace std;
using namespace std::chrono;

int diferenca(long long a[], long long tamanho)
{
  long long diferenca_maxima = 0;

  for (long long i = 0; i < tamanho - 1; i++)
  {
    long long diferenca = abs(a[i + 1] + a[i]);
    if (diferenca > diferenca_maxima)
    {
      diferenca_maxima = diferenca;
    }
  }

  return diferenca_maxima;
}

void testeArray(long long a[], long long tamanho)
{
  auto inicio = high_resolution_clock::now();
  long long resultado = diferenca(a, tamanho);

  auto fim = high_resolution_clock::now();

  auto duracao = duration_cast<microseconds>(fim - inicio);

  cout << "Maior soma absoluta entre consecutivos: " << resultado << endl;
  cout << "Tempo de execucao: " << duracao.count() << " microssegundos" << endl;
}

int main()
{
  long long tamanho1 = 1'000'000;
  long long *arr1 = new long long[tamanho1];
  for (long long i = 0; i < tamanho1; i++)
    arr1[i] = 1000 + i * 1001;

  long long tamanho2 = 2'000'000;
  long long *arr2 = new long long[tamanho2];
  for (long long i = 0; i < tamanho2; i++)
    arr2[i] = 10'000 + i * 100100;

  long long tamanho3 = 3'000'000; 
  long long *arr3 = new long long[tamanho3];
  for (long long i = 0; i < tamanho3; i++)
    arr3[i] = 10'000'00 + i * 100000;

  testeArray(arr1, tamanho1);
  testeArray(arr2, tamanho2);
  testeArray(arr3, tamanho3);
  return 0;
}