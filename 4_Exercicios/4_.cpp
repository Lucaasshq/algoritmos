#include <iostream>
#include <chrono>
using namespace std;

bool prime(long long n)
{
  int qty_divs = 0;
  for (long long d = 1; d <= n; d++)
    if (n % d == 0)
      qty_divs = qty_divs + 1;

  if (qty_divs == 2)
  {
    return true;
  }
  else
  {
    return false;
  }
}

int main()
{
  long long n;
  cin >> n;

  // Inicio do cronometro
  auto beg = chrono::high_resolution_clock::now();
  bool p = prime(n);
  auto end = chrono::high_resolution_clock::now();

  if (p)
  {
    cout << n << " eh primo" << endl;
  }
  else
  {
    cout << n << "nao é primo" << endl;
  }

  auto dur = end - beg; // Duração do cronômetro
  auto duration = chrono::duration_cast<chrono::microseconds>(dur);
  cerr << n << " Processando tempo: " << duration.count() << " microseconds(s)" << endl;

  return 0;
}