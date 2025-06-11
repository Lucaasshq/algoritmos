#include <iostream>
#include "vector-array.hpp"
using namespace std;

int main(){

 //   vector_array v1;
  //  v1.push_back(10);
  //  v1.push_back(20);
   // cout << "v1 " << v1.size() << " Elementos" << endl;
   ///////////////////////////////////////////////////

   vector_array v1;
   int n;
   cin >> n;

   for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        v1.push_back(x);
   }

   cout << " v1: (" << v1.size() << ")" << ", capacity= " << v1.capacity() << endl;
   

    for (int i = 0; i < v1.size() ; i++){
        cout << v1.get_at(i) << " " << endl;
    }

    int meio = v1.size() / 2;
    v1.remove_at(meio);


    

    return 0;
}