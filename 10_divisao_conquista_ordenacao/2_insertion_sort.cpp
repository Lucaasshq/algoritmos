#include <iostream>
using namespace std;

void insertion_sort(int num[], int tam){
    int chave, j;

    for (int i = 1; i < tam; i++){
        chave = num[i];
        j = i -1;

        while (j >= 0 && num[j] > chave){
            num[j+1] = num[j];
            j = j-1;
        }

        num[j+1] = chave;
    } 
}

int main(){
    int numeros[] = {64, 25, 12, 22, 11, 90};
    int tamanho = 6;

    cout << "Array original: ";
    for(int i = 0; i < tamanho; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    // Chama a sua função para ordenar o array
    insertion_sort(numeros, tamanho);

    cout << "Array ordenado: ";
    for(int i = 0; i < tamanho; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    
    return 0;
}