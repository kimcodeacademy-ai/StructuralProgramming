// najdi go rekurzivno, zbirot na celi broevi nepogolemi od n

#include <iostream>
using namespace std;

// n = 5
// 5 + 4 + 3 +2 + 1
//
int zbir(int n) {
   // if (n == 1) {
   //     return 1;
   // }
    if (n == 0) {
        return 0;
    }
    else{
        return n + zbir(n-1);;
    }
}

int main() {

    int n;
    cin >>  n;

    cout<<zbir(n);

}