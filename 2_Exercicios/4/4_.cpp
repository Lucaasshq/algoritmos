#include <iostream>
using namespace std;

int main()
{
  int m;
  int p;

  cout << "Digite o comprimento da rua (em metros): ";
  cin >> m;

  cout << "Digite a distância entre os postes (em metros): ";
  cin >> p;

  // Cálcula número de postes
  int quantidade_postes = m / p + 1; // para incluir o poste incial
  int distanciaUltimoTrecho = m % p; // Resto da divisão para último trecho

  cout << "Quantidade total de postes: " << quantidade_postes << endl;
  cout << "Distancia entre dois ultimos postes: " << distanciaUltimoTrecho << " M" << endl;

  return 0;
}

//  Exemplo: Se a rua tiver 1000 metros e a distância entre os postes for de 250 metros então temos 5 postes, com
//  distância de 250 metros entre eles. Já se a rua tiver os mesmos 1000 metros e a distância entre os postes for de 300
//  metros, a rua terá os mesmos 5 postes, mas a distência entre os dois últimos postes será de 100 metros.