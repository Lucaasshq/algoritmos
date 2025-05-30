#include <iostream>
using namespace std;

long long somaMaxima(long long a[], long long n){
    long long somaMaxima = a[0];

    for (long long i = 0; i < n; i++){
        for (long long j = i; j < n; j++){
            long long somaAtual = 0;
            for (long long k = i; k <= j; k++){
                somaAtual += a[k];
            }
            if (somaAtual > somaMaxima) {
                somaMaxima = somaAtual;
            }

        }
        
    }
    return somaMaxima;
}


int main(){
    long long n;
    long long array[100005];

    cin >> n;

    for (long long i = 0; i < n; i++){
        cin >> array[i];
    }

    long long resultado = somaMaxima(array, n);
    cout << resultado << endl;
    return 0;
}