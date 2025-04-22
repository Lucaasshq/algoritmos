#include <iostream>
using namespace std;

bool ePrimo(int n) {
  int div = 0;

  for (int i = 1; i < n; i++){
    if (n % i == 0){
      div += 1;
    }
  }
  return div == 1;
}

int main()
{
  int n;
  cout << "Digite um numero: ";
  cin >> n;

  if (ePrimo(n)){
    cout << n << " eh primo" << endl;
  } else {
    cout << n << " nao eh primo" <<  endl;
  }

  
  
  
  return 0;
}