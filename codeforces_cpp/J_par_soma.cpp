#include <iostream>
using namespace std;

int main(){
    int n;
    long long s;
    cin >> n >> s;
    long long a[1000];

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if (a[i] + a[j] == s){
                cout << "YES" << endl;
                return 0;
            }
            
        }
        
    }

    cout << "NO" << endl;
    return 0;
    
}