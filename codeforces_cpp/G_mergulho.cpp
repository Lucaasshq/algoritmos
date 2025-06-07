#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N, R;
    std::cin >> N >> R;

    bool* retornou_do_mergulho = new bool[N + 1];

    for (int i = 0; i <= N; ++i) {
        retornou_do_mergulho[i] = false;
    }

    for (int i = 0; i < R; ++i) {
        int id_voluntario;
        std::cin >> id_voluntario;
        retornou_do_mergulho[id_voluntario] = true;
    }

    bool nenhum_desaparecido = true;

    for (int id = 1; id <= N; ++id) {
        if (!retornou_do_mergulho[id]) {
            std::cout << id << " ";
            nenhum_desaparecido = false;
        }
    }

    if (nenhum_desaparecido) {
        std::cout << "*";
    }

    std::cout << std::endl;

    delete[] retornou_do_mergulho;

    return 0;
}