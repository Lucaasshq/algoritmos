#include <iostream>
using namespace std;

bool ordenado(int num[], int tam){
    bool ordenado = true;
    for (int i = 1; i < tam; i++){
        if (num[i-1] > num[i]){
            ordenado = false;
            break;
        }
    }
    return ordenado;
}

int main(){
    int numeros[] = {64, 25, 12, 22, 11, 90};
    int tamanho = 6;

    cout << ordenado(numeros, tamanho) << endl;

    
    return 0;
}