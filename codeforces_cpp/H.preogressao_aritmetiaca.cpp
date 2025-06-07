#include <iostream>

int main() {
    using namespace std; // Adiciona a diretiva using namespace std

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    int* A = new int[N];
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    if (N <= 2) {
        cout << 1 << endl;
        delete[] A;
        return 0;
    }

    int num_APs = 1;
    int current_ap_start_idx = 0;

    while (current_ap_start_idx < N) {
        if (current_ap_start_idx == N - 1 || current_ap_start_idx == N - 2) {
            break; 
        }

        long long r = static_cast<long long>(A[current_ap_start_idx + 1]) - A[current_ap_start_idx];

        int next_element_to_check_idx = current_ap_start_idx + 2;
        
        while (next_element_to_check_idx < N) {
            long long current_diff = static_cast<long long>(A[next_element_to_check_idx]) - A[next_element_to_check_idx - 1];

            if (current_diff == r) {
                next_element_to_check_idx++;
            } else {
                num_APs++;
                current_ap_start_idx = next_element_to_check_idx; 
                break; 
            }
        }
        
        if (next_element_to_check_idx == N) {
            break;
        }
    }

    cout << num_APs << endl;

    delete[] A;

    return 0;
}