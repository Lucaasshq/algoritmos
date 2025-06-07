#include <iostream>
using namespace std;

int main() {
    while (true) {
        int N;
        cin >> N;
        if (N == 0) break; // fim da entrada

        int H[10000];
        for (int i = 0; i < N; ++i) {
            cin >> H[i];
        }

        int picos = 0;

        for (int i = 0; i < N; ++i) {
            int prev = (i == 0) ? H[N - 1] : H[i - 1];
            int next = (i == N - 1) ? H[0] : H[i + 1];

            if ((H[i] > prev && H[i] > next) || (H[i] < prev && H[i] < next)) {
                picos++;
            }
        }

        cout << picos << endl;
    }

    return 0;
}
