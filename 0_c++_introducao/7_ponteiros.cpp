#include <iostream>
#include <cstddef>
using namespace std;

int main(){
    int var1;
    int* pont1; // ponteiro 
    var1 = 5;
    pont1 = &var1; // pont1 recebeu endereco de memoria de  var1

    cout << "Valor da variavel atraves do seu nome: " << var1 << endl;
    cout << "Endereco de memoria da var1: " << pont1 << endl;
    // acessando valor valor da variaveis atraves do ponteiros!
    cout << "Valor da var1, atraves do ponteiro: " << *pont1 << endl;

    // atribuindo valor do ponteiro a outra variavel!
    int var2;
    // var2 = var1;
    var2 = *pont1;
    cout << var2 << endl;

    // var1 = 30;
    // *pont1 = 30;
    // cout << var1 << endl;

    // colocando ponteiro para apontar para var2
    
    // var2 = 50;
    // pont1 = &var2;
    // cout << *pont1 << endl;
    // cout << var1 << endl;

    // ponteiro apontar para vazio

    // int* pont2;
    // pont2 = NULL;
    // cout << *pont2 << endl;

    int* pont3 = new int; // criando espaco de memoria com valor inteiro
    *pont3 = 35;
    cout << *pont3 << endl;

    delete pont3
    pont3 = pont1;
    cout << *pont3 << endl;

    return 0;

}