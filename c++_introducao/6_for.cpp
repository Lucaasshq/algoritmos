#include <iostream>
using namespace std;

int contar_divisores(int n){
  int qtd = 1;

  for (int i=1; i<n; i++){
    if ( n%i == 0 ) {
      qtd++;
    }
  }
  return qtd;
}

int main() {
  int a;
  cin >> a;
  int div = contar_divisores(a);
  cout << div << endl;
  
  return 0;
}