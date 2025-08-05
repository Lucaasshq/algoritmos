#include <iostream>
using namespace std;

double exp(double a, int n){
    if (n == 0){
        return 1;
    }
    if (n == 1){
        return a;
    }
    double p = 1;
    if (n% 2 == 1){
        p = a;
        n = n-1;
    }
    double r = exp(a, n/2);
    return p * r * r;
}