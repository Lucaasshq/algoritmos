#include <iostream>
using namespace std;

void contar_positivos_e_negativos(int a[], int n, int positivos[], int negativos[], int& qtd_positivos, int& qtd_negativos){
  for (int i = 0; i < n; i++){
    if (a[i] >= 0){
      positivos[qtd_positivos] = a[i];
      qtd_positivos++;
    }
    if (a[i] < 0){
      negativos[qtd_negativos] = a[i];
      qtd_negativos++;
    }
  }

  
}

int main()
{
  int n;
  cout << "Digite o tamanho do Array: ";
  cin >> n;
  int a[n];
  int positivos[n], negativos[n];
  int qtd_positivos = 0, qtd_negativos = 0;

  cout << "Digite os elementos separados por espaço: ";
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  contar_positivos_e_negativos(a, n, positivos, negativos, qtd_positivos, qtd_negativos);

  cout << "Quantidade de positivos: " << qtd_positivos << endl;
  for (int i = 0; i < qtd_positivos; i++){
    cout << positivos[i] << " ";
  }

  cout << endl;

  cout << "Quantidade de negativos: " << qtd_negativos << endl;
  for (int i = 0; i < qtd_negativos; i++){
    cout << negativos[i] << " ";
  }
  
  return 0;
}