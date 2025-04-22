// 3. Escreva um programa que leia um número real, com 5 (cinco) casas decimais, que represente o diâmetro de um
// círculo e mostre a área a do mesmo, de acordo com a fórmula da área a seguir:

//                                a = πr2
#include <iostream>
using namespace std;
#include <iomanip>

int main() {
  double diametro;

  cin >> diametro;

  double raio = diametro / 2;

  double pi = 3.14159;

  double area = pi * raio * raio;

  cout << fixed << setprecision(4) << area << endl;

  return 0;
}