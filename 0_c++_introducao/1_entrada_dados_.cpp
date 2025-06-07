#include <iostream>
using namespace std;

void imprimirArray(float* arr, int tamanho){
		for (int i = 0; i < tamanho; i++){
				cout << arr[i] << " ";
		}
		cout << endl;
}

int main() {
    float notas[] = {7.5, 8.0, 6.5};
    imprimirArray(notas, 3);  // passa o ponteiro para o primeiro elemento
    return 0;
}
