#include <iostream>
using namespace std;



int main() {
    double a; 
    double b;
    cin >> a >> b;

    double notaNormal = (b / a) * 100;
    int notaInteira = notaNormal;

    cout << notaInteira << endl;

    return 0;
}