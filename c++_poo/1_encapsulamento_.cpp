#include <iostream>
#include <string>
using namespace std;

class Pessoa {
private:
    string nome;
    int idade;

public:
    Pessoa(string n, int i){
        nome = n;
        idade = i;
    }

    string getNome()  {
        return nome;
    }

    int getIdade(){
        return idade;
    }

    void mostrarInfo(){
        cout << "Nome: " << nome << ", Idade: " << idade << endl;
    }
};

int main(){
    Pessoa p1("Lucas", 21);

    p1.mostrarInfo();
}