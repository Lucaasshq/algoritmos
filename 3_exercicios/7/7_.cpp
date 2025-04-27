#include <iostream>
using namespace std;

void soma_igual_a_S_(int a[], int tamanho, long long s){
  long long valor_s = 0;
  for (int i = 0; i < tamanho; i++){
    for (int j = i + 1; j < tamanho; j++){
      if (a[i] + a[j] == s){
        valor_s = s;
        cout << "A soma de " << a[i] << " + " << a[j] << " eh igual a " << s << endl; 
        break;
      }
    }
    if (s == valor_s){
      break;
    }
  }
}

int main(){
  int tamanho;
  long long s;
  cout << "Digite o tamanho do array: ";
  cin >> tamanho;

  cout << "Digite o valor de s: ";
  cin >> s;

  int a[tamanho];

  cout << "Digite os itens do array separados por espaco ";
  for (int i = 0; i < tamanho; i++){
    cin >> a[i];
  }

  soma_igual_a_S_(a, tamanho, s);
  

  return 0;
}