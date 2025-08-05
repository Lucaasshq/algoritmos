#include <iostream>
using namespace std;

//Ela organiza os números do menor para o maior,
// colocando um elemento em sua  
// posição correta a cada passo.
void selection_sort(int num[], int tam){
    int min, aux;
    for (int i = 0; i < tam-1; i++){
        min = i;
        for (int j = i+1; j < tam; j++){
            if (num[j] < num[min]){
                min = j;
            }
        }
          if (num[i] != num[min]){
            aux = num[i];
            num[i] = num[min];
            num[min] = aux;
        }
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
    selection_sort(numeros, tamanho);

    cout << "Array ordenado: ";
    for(int i = 0; i < tamanho; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}