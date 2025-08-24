// Од тастатура се внесува природен број N. Да се испише следната форма на излез:
//
// 1
// 121
// 11311
// 1114111
// ……
// 11..1N11...11
//
// При печатењето да се искористи рекурзивна функција која ќе печати еден ред од формата: 11..1K11..1.
//
// Доколку задачата се реши без примена на функција ќе може да се освојат до 40% од поените. Доколку функцијата не е (потполно) рекурзивна, може да со освојат до 60% од поените


#include <iostream>
using namespace std;

void pecatiRed(int k) {
    if (k == 1) {
        cout << 1 << endl;
        return;
    }

    // ako ja povikuvame rekurzivnata funkcija pred ostanata logika, togash taa izvrtuva do kraj
    // doagja do granicniot slucaj k == 1, se izvrsuva toa pa eden po eden go pecati drugiot del od kodot
    pecatiRed(k-1);

    for (int i = 1; i < k; i++) {
        cout << 1;
    }

    cout << k;

    for (int i = 1; i < k; i++) {
        cout << 1;
    }
    cout << endl;
}

int main() {
    int N;
    cin >> N;
    pecatiRed(N);
    return 0;
}
