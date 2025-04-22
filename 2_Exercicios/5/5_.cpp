#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Digite um numero menor 10^9: ";
  cin >> n;

  int div = 0;
  for (int i = 1; i <= n; i++){
    if (n % i == 0) {
      div++;
    }
  }

  cout << "Quantidade de divisores: " << div << endl;

  return 0;
}