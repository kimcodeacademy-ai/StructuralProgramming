// 1.vnesuvash od standard input N da se ispecatat 1234…N…4321 i da se namaluvaa
// (60% poeni ako se reshi so funkcija,40% ako e bez funcija, 100% so rekurzija)
// pr. input 5
// output
// 123454321
// 1234321
// 12321
// 121
// 1


#include <iostream>
using namespace std;

void pecatiNRekurzivno(int n) {
    if (n == 1) {
        cout << "1" << endl;
    }
    else {
        for (int i = 1; i <= n; i++) {
            cout << i;
        }
        for (int i = n-1; i >= 1; i--) {
            cout << i;
        }
        cout << endl;
        pecatiNRekurzivno(n-1);
    }
}

void pecatiN(int n) {
    // 123454321
    // 1234321 ..
    for (int i = 1; i <= n; i++) {
        cout << i;
    }
    for (int i = n-1; i >= 1; i--) {
        cout << i;
    }
    cout << endl;
}
int main() {
    int n;
    cin >> n;

    // ako vnesam 5
    // 123454321
    // 1234321
    // 12321
    // 121
    // 1
    // for (int i = n; i >= 1; i--) {
    //     pecatiN(i);
    // }

    pecatiNRekurzivno(n);
}