#include <iostream>
#include <iomanip> // <- biblioteca necessária pro setprecision

using namespace std;

double media(double a, double b) {
  double result = (a+b) / 2;
  if (result >= 6.0) {
    cout << "Aluno aprovado! \n";
  } else {
    cout << "Aluno em recuperação! \n";
  }
  return result;
}

int main(){
  double nota1, nota2;
  cin >> nota1 >> nota2;
  double result = media(nota1, nota2);
  cout << fixed << setprecision(1);
  cout << result << endl;
  return 0;
}