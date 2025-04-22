#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double raiz(double a) {
  double y = a / 2.0;
  double form = 0.5 * (y + a / y);
  double formula_2 = 0.5 * (form + a / form);

  while ((form - formula_2 > 0.0001) || (formula_2 - form > 0.0001)){
    y = formula_2;
    form = 0.5 * (y + a / y);
    formula_2 = 0.5 * (form + a / form);
  }
  return formula_2;

}

int main() {
  double a;
  cout << "Digite um numero: ";
  cin >> a;

  double resultado = raiz(a);
  cout << fixed << setprecision(4) << resultado << endl;
}