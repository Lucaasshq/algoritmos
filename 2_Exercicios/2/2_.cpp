// 2. Escreva um programa que leia dois lados l1 e l2 que forma um retângulo, como mostrado a seguir, e mostre o
// perímetro do retângulo.
#include <iostream>
using namespace std;

long long calcularPerimetro(long long l1, long long l2)
{
  return 2 * (l1 + l2);
}

int main()
{
  long long l1;
  long long l2;

  cin >> l1 >> l2;

  // perímetro
  long long perimetro = calcularPerimetro(l1, l2);

  cout << perimetro << endl;

  return 0;
}
