#include <iostream>

bool tabuleiro[11][11]; 

int main() {
    using namespace std; 

    int N;
    cin >> N;

    bool valido = true;

    for (int k = 0; k < N; ++k) {
        int D, L, R, C;
        cin >> D >> L >> R >> C;

        if (!valido) { 
            continue; 
        }

        if (D == 0) {
            if (C + L - 1 > 10) {
                valido = false;
                continue;
            }
            for (int j = C; j < C + L; ++j) {
                if (tabuleiro[R][j]) {
                    valido = false;
                    break;
                }
                tabuleiro[R][j] = true;
            }
        } else {
            if (R + L - 1 > 10) {
                valido = false;
                continue;
            }
            for (int i = R; i < R + L; ++i) {
                if (tabuleiro[i][C]) {
                    valido = false;
                    break;
                }
                tabuleiro[i][C] = true;
            }
        }
    }

    if (valido) {
        cout << 'Y' << endl;
    } else {
        cout << 'N' << endl;
    }

    return 0;
}