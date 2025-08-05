#include <iostream>
using namespace std;

long fib(long n){
    if (n<2) return n;
    return fib(n-1)+fib(n-2);
}

long dp[10000];
long fib(long n){
    if (dp[n] != -1) {
        return dp[n];
    }
    if (n<2){
         dp[n] = n;
    }else {
        dp[n]=fib(n-1)+fib(n-2);
        return dp[n];
    }
    
}