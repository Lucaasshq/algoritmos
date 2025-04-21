#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int a, b;
  double media;
  cin >> a >> b;
  media = (a+b)/2.0; // conversão implicita divisap de doubles
  cout << fixed << setprecision(2) // define número de casas decimais
       << media << endl;


  return 0;
}