#include <iostream>
#include <cstdlib> // Para a função abs()

using namespace std;

struct fracao
{
  int numerador;
  int denominador;
};

int mdc(int a, int b)
{
  while (b != 0)
  {
    int temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}

int mmc(int a, int b)
{
  if (a == 0 || b == 0)
    return 0;

  return abs(a * b) / mdc(a, b);
}

fracao simpli(fracao f)
{
  int divisor = mdc(f.numerador, f.denominador);
  if (divisor != 0)
  {
    f.numerador /= divisor;
    f.denominador /= divisor;
  }

  if (f.denominador < 0)
  {
    f.numerador *= -1;
    f.denominador *= -1;
  }

  return f;
}

fracao soma(fracao f1, fracao f2)
{
  fracao resultado;

  int m = mmc(f1.denominador, f2.denominador);
  if (m == 0)
  {
    resultado.numerador = 0;
    resultado.denominador = 0;
    return resultado;
  }

  resultado.numerador = (f1.numerador * (m / f1.denominador)) + (f2.numerador * (m / f2.denominador));
  resultado.denominador = m;
  return simpli(resultado);
}

int main()
{
  fracao f1, f2;
  cout << "Digite o numerador e denominador da primeira fracao: ";
  cin >> f1.numerador >> f1.denominador;
  cout << "Digite o numerador e denominador da segunda fracao: ";
  cin >> f2.numerador >> f2.denominador;

  fracao f3 = soma(f1, f2);
  cout << "Resultado da soma: " << f3.numerador << "/" << f3.denominador << endl;
  return 0;
}