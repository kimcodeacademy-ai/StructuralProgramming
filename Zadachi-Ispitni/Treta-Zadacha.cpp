// Од стандарден влез се чита природен број N (N <= 100), како и низа од позитивни цели броеви a[ ] со N елементи.
// Да се напише функција int par(a, n) која ќе го врати најмалиот елемент во низата кој се појавува парен број пати во низата. Доколку нема таков елемент, функцијата враќа вредност 0.
// Напишете програма што ќе ја повика функцијата par за внесената низа a[ ] и ќе го испечати најмалиот број којшто се појавува парен број пати во низата a[ ].
// Пример 1.
// Влез
// 12 // бројот N на елементи
// 1 3 4 5 3 1 4 5 5 3 2 3 // елементи на низата
// Излез
// Najmaliot element koj se pojavuva paren broj pati e 1 // овде функцијата par враќа вредност 1, а се печати оваа порака

#include <iostream>
using namespace std;

int par(int a[], int n) {
    int minEvenCount = 0;

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (a[i] == a[j]) {
                count++;
            }
        }
        if (count % 2 == 0) {
            if (minEvenCount == 0 || a[i] < minEvenCount) {
                minEvenCount = a[i];
            }
        }
    }
    return minEvenCount;
}

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }

    int res;
    res = par(a, n);

    if (res != 0) {
        cout << "Najaliot element koj se pojaavuva paren broj pati e "<< res << endl;
    }

    return 0;
}