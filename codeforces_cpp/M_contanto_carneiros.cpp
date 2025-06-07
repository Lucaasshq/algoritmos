#include <iostream>
#include <algorithm>

int main() {
    using namespace std;


    int T;
    cin >> T;

    for (int caso = 0; caso < T; ++caso) {
        int N;
        cin >> N;

        long long carneiros[10000]; 

        for (int i = 0; i < N; ++i) {
            cin >> carneiros[i];
        }

        std::sort(carneiros, carneiros + N);

        int distintos = 0;
        if (N > 0) {
            distintos = 1; 
        }
        
        for (int i = 1; i < N; ++i) {
            if (carneiros[i] != carneiros[i - 1]) {
                distintos++; 
            }
        }

        cout << distintos << endl;
    }

    return 0;
}