#include <iostream>
using namespace std;

const int INF = 1e9;
const int MAX_V = 5001;

int main() {
    int n, v;
    cin >> n >> v;

    int moedas[20];
    for (int i = 0; i < n; ++i) cin >> moedas[i];

    int dp[MAX_V];
    for (int i = 0; i <= v; ++i) dp[i] = INF;
    dp[0] = 0;

    for (int i = 0; i < n; ++i) {
        int c = moedas[i];
        for (int j = c; j <= v; ++j) {
            if (dp[j - c] + 1 < dp[j]) {
                dp[j] = dp[j - c] + 1;
            }
        }
    }

    cout << dp[v] << '\n';
    return 0;
}
