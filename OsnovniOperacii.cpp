// //Напиши програма што ќе ја отпечати сумата на сите броеви од 1 до N, каде што N го внесува корисникот..
#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int n, suma = 0, i = 0;
    cin>>n;

    // for (int i = 0; i < n; i++) {
    //     suma += i;
    // }

    // while (i < n) {
    //     suma += i;
    //     i++;
    // }

    do {
        suma += i;
        i++;
    }while (i < n);

    cout<<suma;
    return 0;
}