// Да се напише програма која за матрица од знаци внесена од тастатура ќе ја најде разликата помеѓу бројот на големи букви
// (A–Z) во главната дијагонала и бројот на мали букви (a–z) во споредната дијагонала.
//
// Пример
// Влез:
//
// 3 3
// A b C
// d E f
// g h I
//
// Излез:
// Разлика: 2

#include <iostream>
#include <cctype>

using namespace std;

int main() {
    int n;
    cin>>n;

    char mat[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j]<<" ";
        }
        cout<<endl;
    }

    int golemi = 0, mali = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0 ; j < n; j++) {
            if (i==j && (mat[i][j] >= 'A' && mat[i][j] <= 'Z')) {
                golemi++;
            }

            if (i + j == n-1) {
                mali++;
            }
        }
    }

    int razlika = golemi - mali;

    cout << "Golemi bukvi "<< golemi<<endl;
    cout << "Mali bukvi "<< mali<<endl;
    cout << "Razlikata e: "<< razlika<< endl;
}
