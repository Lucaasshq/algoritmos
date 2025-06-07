#include <iostream>
#include <iomanip> // para usar setprecision
using namespace std;

int main() {
    int N;
    cin >> N;

    const int MAX = 1000000;
    long long A[MAX]; 
    long long soma = 0;

   
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
        soma += A[i];
    }


    double media = static_cast<double>(soma) / N;

    int abaixo = 0, acima_ou_igual = 0;

    for (int i = 0; i < N; ++i) {
        if (A[i] < media) {
            abaixo++;
        } else {
            acima_ou_igual++;
        }
    }

    cout << fixed << setprecision(1) << media << endl;
    cout << abaixo << endl;
    cout << acima_ou_igual << endl;

    return 0;
}