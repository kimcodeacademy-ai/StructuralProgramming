// Од стандарден влез се читаат елементите на една матрица (A), составена од цели броеви.
// Прво се читаат бројот на редици N и бројот на колони M на матрицата (N, M < 120), а потоа и самите елементи на матрицата.
// Да се испечати колку индексни броеви има во секоја колона поединечно.
// Индексен број е број чија вредност е идентична со вредноста што се добива со спојување на индексот од редицата и колоната на елементот.
//
//
// Помош:
// Индексен елемент: вредноста на елементот Aij е иста со ij како број
// ако i=10, j=31, елементот Aij треба да има вредност 1031 за да биде индексен број
// Пример:
// Влез:
//
// 4  5
// 0    1    2    3    4
// 5    6    7    8    9
// 10  21  22  23  11
// 0    1    2    33    4
//
// Излез:
// 1
// 2
// 2
// 3
// 1
//
//
// Објаснување:
// Во матрицата A индексни елементи се:
//
// 1ва колона: 0
// 2ра колона: 1, 21
// 3та колона: 2, 22
// 4та колона: 3, 23, 33
// 5та колона: 4


#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >>  N >> M;
    int a[N][M];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> a[i][j];
        }
    }

    for (int j = 0; j < M;j++) {
        int counter = 0;
        cout<<j << " kolona ima indeksni broevi :";
        for (int i = 0; i < N; i++) {
            int combined = 0;
            int multiplier = 1;
            int jIndex = j;

            // i = 5, j= 40, combined = 540
            // go mnozam multiplier so 10, tolku pati kolku sto ima cifri vo jIndex
            while (jIndex > 0) {
                multiplier *= 10;
                jIndex /= 10;
            }

            // 5 * 100 + 40 = 540
            combined = i * multiplier + j;

            // treba da sporedime combined so vrednosta sto se naogja na taa redica i taa kolona
            if (combined == a[i][j]) {
                cout<<combined<< " ";
                counter++;
            }
        }
        cout<<endl;
    }

}