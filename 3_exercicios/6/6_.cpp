#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct cordenada{
  double x, y;
};

double quadrado_distancia(cordenada p1, cordenada p2){
  return (p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y);
}

double menor_distancia(cordenada pontos[], int n){
  double d_min = -1;

  for (int i = 0; i < n; i++){
    for (int j = i + 1; j < n; j++){
      double d = quadrado_distancia(pontos[i], pontos[j]);

      if (d_min == -1 || d < d_min){
        d_min = d;
      }
    }
  }

  return sqrt(d_min);
}

int main() {
  int n;
  cin >> n;

  cordenada pontos[n];
  for (int i = 0; i < n; ++i) {
    cin >> pontos[i].x >> pontos[i].y;
  }

  double distancia = menor_distancia(pontos, n);
  cout << fixed << setprecision(4) << distancia << endl;
  return 0;
}
