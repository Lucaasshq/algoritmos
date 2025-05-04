#include <iostream>
#include <chrono>
using namespace std;

bool ehPrimo(long long n) {
    if (n == 1) return false;
    if (n == 2) return true;

    int divs = 1; // 1 é divisor de todos os naturais

    for (long long i = 3; i <= n / 2; i += 2) {
        if (n % i == 0) {
            divs++;
        }
    }

    return divs == 1;
}


int main()
{
  long long numeros[] = {
      11,
      240000029, 480000077, 720000103, 960000131, 1200000133,
      1440000137, 1680000149, 1920000161, 2160000163, 2400000167,
      2640000217, 2880000251, 3120000253, 3360000257, 3600000269,
      3840000289, 4080000293, 4320000329, 4560000343, 4800000347,
      5040000443, 5280000461, 5520000463, 5760000473, 6000000511,
      6240000581, 6480000589, 6720000593, 6960000613, 7200000623,
      7440000629, 7680000703, 7920000707, 8160000721, 8400000727,
      8640000749, 8880000757, 9120000809, 9360000827, 9600000833,
      9840000869};

  int quantidade = sizeof(numeros) / sizeof(numeros[0]);

  // Verificação de primos
  for (int i = 0; i < quantidade; i++)
  {

    long long n = numeros[i];

    // Início do cronômetro
    auto beg = chrono::high_resolution_clock::now();

    bool p = ehPrimo(n);

    // Fim do cronômetro
    auto end = chrono::high_resolution_clock::now();

    // Cálculo da duração em milissegundos
    auto duracao = chrono::duration_cast<chrono::microseconds>(end - beg);

    cerr  << duracao.count() << endl;
  }

  return 0;
}