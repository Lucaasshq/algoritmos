#include <iostream>
using namespace std;

int fat(int v){
    if (v == 1){
        return 1;
    }else {
        return v * fat(v-1);
    }

}

int main(){
    int valor;
    cin >> valor; 

    int resultado = fat(valor);
    cout << resultado << endl;

    return 0;
}