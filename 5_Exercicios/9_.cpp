#include <iostream>
using namespace std;

int tempoParaReduzirMassa(int t, double mi) {
    int tempo_total = 0;
    while (mi > 1.0) {       // O(log mi)
        mi /= 2.0;           // O(1)
        tempo_total += t;    // O(1)
    }
    return tempo_total;      // O(1)
}


int main() {
    double massa_inicial;
    int tempo_meia_vida;

    cout << "Digite a massa inicial (g): ";
    cin >> massa_inicial;

    cout << "Digite o tempo de meia-vida (s): ";
    cin >> tempo_meia_vida;

    int tempo = tempoParaReduzirMassa(massa_inicial, tempo_meia_vida);

    cout << "A massa atinge 1g ou menos em " << tempo << " segundos." << endl;

    return 0;
}
