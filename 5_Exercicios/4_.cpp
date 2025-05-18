#include <iostream>
#include <cmath>
#include <chrono>
using namespace std;
using namespace std::chrono;

long long subLista(long long a[], long long n)
{
  long long tem = 1;
  long long maximo = 1;
  for (long long i = 1; i < n; i++)
  {
    if (a[i] >= a[i - 1])
    {
      tem++;
    }
    else
    {
      tem = 1;
    }

    if (tem > maximo)
    {
      maximo = tem;
    }
  }
  return maximo;
}

void testeSubLista(long long a[], long long tamanho)
{
  auto inicio = high_resolution_clock::now();
  long long resultado = subLista(a, tamanho);

  auto fim = high_resolution_clock::now();

  auto duracao = duration_cast<microseconds>(fim - inicio);

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

  testeSubLista(arr1, tamanho1);
  testeSubLista(arr2, tamanho2);
  testeSubLista(arr3, tamanho3);

  return 0;
}