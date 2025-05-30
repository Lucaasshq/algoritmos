#include <iostream>
using namespace std;

int main(){
    int s = 15;
    int array[] = {10, 20, 9, 1, 63, 6, 5, 12};
    int lenght = 8;
    int soma = 0;
    bool encontrou = false;
    for (int i = 0; i < lenght; i++){
        for (int j = i+1; j < lenght; j++){
            if (array[i]+array[j] == s) {
                soma = array[i]+ array[j];
                cout << "Par encontrado: " << array[i] << " + " << array[j] << " = " << soma <<  endl;
                encontrou = true;
                break;
            }
        }
        if (encontrou) break;
    }
    if (!encontrou) {
        cout << " Nenhum par com a soma maior ou igual " << s << " encongtrado." << endl;
    }
    return 0;
}