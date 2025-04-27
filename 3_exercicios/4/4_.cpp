#include <iostream>
using namespace std;

 long long soma_consecutivos(long long a[], long long n){
  long long maior_soma = a[0] + a[1];
  
  for (int i = 1; i < n - 1; i++){

    if (a[i] + a[i+1] > maior_soma){
      maior_soma = a[i] + a[i +1];

    }
  }
  return maior_soma;

 }

int main()
{
  long long n;
  cout << "Digite o tamanho do array: ";
  cin >> n;
  long long a[n];

  cout << "Digite os elementos separados por espaco: ";
  for (int i = 0; i < n; i++){
    cin >> a[i];
  }

  long long resultado = soma_consecutivos(a, n);
  cout << resultado << " " << endl;

  
  return 0;
}