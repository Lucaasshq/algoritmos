#include <iostream>
using namespace std;

bool ePrimo(int num){
  if (num <= 1) return false;
  if (num == 2) return true;
  
  for (int i = 2; i < num; i++){
    if (num % i == 0) return false;
  }
  return true;

}

void numeros_primos(int a[],int n){
  int qtd_primos = 0;
  int primos[n];

  // Verificar se o numero é primo
  for (int i = 0; i < n; i++){
    if(ePrimo(a[i])){
      primos[qtd_primos] = a[i];
      qtd_primos++;
    }
  }


  cout << "Quantidade de primos: " << qtd_primos << endl;
  cout << "Numeros primos: ";
  for (int i = 0; i < qtd_primos; i++){
    cout << primos[i] << " ";
  }
  
}

int main(){

  int n;
  cout << "Digite o tamanho do array: ";
  cin >> n;
  int a[n];

  cout << "Digite os elementos separados por espaco: ";
  for (int i = 0; i < n; i++){
    cin >> a[i];
  }

  numeros_primos(a, n);

  return 0;
}