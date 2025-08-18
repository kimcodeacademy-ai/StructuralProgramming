// Задача 1: Најдолга растечка подниза
//
// Од стандарден влез се внесува еден природен број N (должина на низа), а потоа N цели броеви.
// Да се најде должината на најдолгата подниза составена од последователни елементи што се растечки.
//
// 📥 Влез:
// 8
// 2 3 1 2 3 4 1 2
// 📤 Излез:
//
// 4
// 👉 Објаснување: Најдолгата растечка подниза е 1 2 3 4, со должина 4.

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int niza[n];
    for (int i  = 0; i < n; i++)
        cin >> niza[i];

    int maxLen = 0, curLen = 1, counter = 0;

    // dopolnitelni promenlivi:
    int pocetok, kraj, maxPocetok, maxKraj;

    for (int i = 1; i < n; i++) {
        if (niza[i] > niza[i-1]) {
            counter++;
            kraj++;
        }
        else {
            counter = 1;
            pocetok = i;
            kraj = i;
        }
        if (counter >= maxLen) {
            maxLen = counter;
            maxPocetok = pocetok;
            maxKraj = kraj;
        }
    }

    cout<<"Najdolga rastecka podniza e nizata so dolzina "<< maxLen<<endl;

    // maxlen == 4
    // inicijalizirash nova niza so onolku elementi kolku sto e maxlen

    for (int i = 0; i < n; i++) {
        if (i >= maxPocetok && i<= maxKraj) {
            // vo novata niza vmetni go elementot od nizata[i];
        }
    }

}