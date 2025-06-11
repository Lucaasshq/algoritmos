#include <iostream>
#include "vector-array.hpp"
using namespace std;

int main(){

    vector_array v1;
    v1.push_back(10);
    v1.push_back(20);
    cout << "v1 " << v1.size() << " Elementos" << endl;

    for (int i = 0; i < v1.size() ; i++){
        cout << v1.get_at(i) << " " << endl;
    }
    

    return 0;
}