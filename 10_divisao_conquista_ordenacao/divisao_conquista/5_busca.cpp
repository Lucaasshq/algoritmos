#include <iostream>
using namespace std;

int busca(int* a, int encontrar, int inicio, int fim){
    int meio = 0;
    
    if (inicio > fim){
        return 0;
    } else {
        meio = (inicio+fim) / 2;
    }

    if (encontrar == a[meio]){
        return meio;
    } else {
        if (encontrar < a[meio]){
            return busca(a,encontrar, inicio, meio-1);
        } else {
            return busca(a,encontrar,meio+1,fim);
        }
    }

}