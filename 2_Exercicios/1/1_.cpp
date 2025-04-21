#include <iostream>
using namespace std;

long long soma(long long n1, long long n2)
{
  long long r = n1 + n2;
  return r;
}

int main()
{
  long long a, b;

  cin >> a >> b;
  long long s = soma(a, b);
  cout << s << endl;
  return 0;
}
