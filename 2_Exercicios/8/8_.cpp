#include <iostream>
using namespace std;


int calcularMDC(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    cout << "Digite dois numeros naturais positivos: ";
    cin >> a >> b;

    if (a <= 0 || b <= 0) {
        cout << "Os numeros devem ser naturais positivos!" << endl;
        return 1;
    }

    int mdc = calcularMDC(a, b);
    cout << "O MDC de " << a << " e " << b << " eh: " << mdc << endl;

    return 0;
}
