#include <iostream>
using namespace std;

void merge_sort(int a[], int primeiro, int ultimo) {
    int meio;
    if (primeiro < ultimo) {
        meio = (primeiro + ultimo) / 2;
        merge_sort(a, primeiro, meio);
        merge_sort(a, meio + 1, ultimo);
        merge(a, primeiro, meio, meio + 1, ultimo);
    }
}