#include <iostream>
#include <iomanip>
#include <cmath> // Para sqr
using namespace std;
struct Ponto{
    double x, y;
};

double distancia(Ponto a, Ponto b){
    double dx = a.x - b.x;
    double dy = a.y - b.y;
    return (dx * dx) + (dy * dy);
}


int main(){
    int n;
    cin >> n;
    Ponto pontos[1005];

    for (int i = 0; i < n; i++){
        cin  >> pontos[i].x >> pontos[i].y; // Ler x e y
    }

    double menorDistancia = distancia(pontos[0], pontos[1]);
    int p1 = 0, p2 = 1;

    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            double d = distancia(pontos[i], pontos[j]);
            if (d < menorDistancia){
                menorDistancia = d;
                p1 = i;
                p2 = j;
            }
        }  
    }
    cout << fixed << setprecision(2);
    cout << "Pontos mais proximos:  (" << pontos[p1].x << ", " << pontos[p1].y << ") e (" << pontos[p2].x << ", " << pontos[p2].y << ") \n";
    cout << " Distancia: " << sqrt(menorDistancia) << endl;
    return 0;
}oQq2L6YGQCH!4R2