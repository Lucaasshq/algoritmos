#include <iostream>
using namespace std;

int kardane(int a[], int tamanho){
  int soma_Maxima = a[0];
  int soma_Atual = a[0];

  for (int i = 1; i < tamanho; i++){
    if (soma_Atual + a[i] > a[i]){
      soma_Atual += a[i];
    }else{
      soma_Atual = a[i];
    }

    if (soma_Atual > soma_Maxima){
      soma_Maxima = soma_Atual;
    }
  }

  return soma_Maxima;
}

int main()
{
  int tamanho = 9;
  int a[tamanho] = {10, 5, -17, 20, 50, -1, 3, -30, 10};

  int resultado = kardane(a, tamanho);
  cout << resultado << endl;

  return 0;
}