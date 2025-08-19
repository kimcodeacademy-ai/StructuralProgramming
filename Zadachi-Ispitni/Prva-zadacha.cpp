// 1.Од тастатура се чита природен број N (N < 400).
// Да се напише програма којашто формира квадратна матрица што ги содржи броевите од 1 до N по растечки редослед
// на следниот начин: во првата колона во правец од горе надолу, па продолжува во втората колона од долу нагоре,
// па продолжува во третата колона од горе надолу итн. Да се избере најмалата димензија на матрицата во која ќе ги собере
// сите броеви до N. Доколку има преостанати празни места, тие да се пополнат со нули.
// Пример.
//
// Влез
//
// 22
// Излез
//
// 1 10 11 20 21
//
// 2 9 12 19 22
//
// 3 8 13 18 0
//
// 4 7 14 17 0
//
// 5 6 15 16 0

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin>>N;
    // kolkav e najmaliot broj na elementi sto mi se potrebni za da ja popolnam matricata
    // ceil ni go kastira brojot na pogolemiot integer posle decimalata
    int size = ceil(sqrt(N));

    int mat[size][size];

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            mat[i][j] = 0;
        }
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    int counter = 1;
    for (int col = 0; col < size; col++) {
        if (col % 2 == 0) {
            for (int row = 0; row < size; row++) {
                if (counter <= N) {
                    mat[row][col] = counter;
                    counter++;
                }
            }
        }
        else {
            for (int row = size - 1; row >= 0; row--) {
                if (counter <= N) {
                    mat[row][col] = counter;
                    counter++;
                }
            }
        }

    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;

}