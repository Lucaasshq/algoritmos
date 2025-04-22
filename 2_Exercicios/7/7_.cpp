#include <iostream>
using namespace std;

bool primosEntreSi(int a, int b) {
  bool primo = true;
  int menor = min(a, b);

  for (int i = 2; i <= menor; i++) {
    if (a % i == 0 && b % i == 0) {
      primo = false;
      break;
    }
  }
  return primo;
}

int main() {
  int a, b;

  cout << "Digite um numero: ";
  cin >> a;

  cout << "Digite outro numero: ";
  cin >> b;

  bool ehPrimo = primosEntreSi(a, b);

    cout << boolalpha;
    cout << ehPrimo << endl;
  

  return 0;
}
