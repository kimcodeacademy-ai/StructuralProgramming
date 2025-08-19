// Од тастатура се внесуваат димензиите m и n на матрица од цели броеви, Аmxn, ( 0 < m, n < 30 ) и нејзините елементи.
// Потоа се внесуваат два цели броја r и k  (индекси на редица/колона од матрицата, т.е. 0 <= r < m и 0 <= k < n).
//
// Да се напише програма која ja трансформира матрицата А така што елементите над редицата r и лево од колоната k
// се заменуваат со минималната вредност од матрицата А.
//
// Пример
//
// Влез
//
// 4 6 // m и n
//
// 2 3 // r и k
//
// 1 2 3 4 5 1
//
// 2 9 4 5 1 3
//
// 4 5 6 7 3 2
//
// 1 2 3 3 2 8
//
//
//
// Излез
//
// 1 1 1 4 5 1
//
// 1 1 1 5 1 3
//
// 4 5 6 7 3 2
//
// 1 2 3 3 2 8


#include<iostream>
using namespace std;

int main() {

    int m, n, r, k;

    cout<<"Vnesi m i n: "<<endl;
    cin>>m>>n;

    cout<<"Vnesi r i k: "<<endl;
    cin>>r>>k;

    int mat[m][n];

    for(int i=0;i<m;i++) {
        for (int j = 0; j < n; j++) {
            cin>>mat[i][j];
        }
    }

    cout<<"Izgled na matricata pri vnes: "<<endl;
    for(int i=0;i<m;i++) {
        for (int j = 0; j < n; j++) {
            cout<<mat[i][j]<< " ";
        }
        cout<<endl;
    }

    int min = 0;
    for(int i=0;i<m;i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 && j == 0) {
                min = mat[i][j];
            }
            if (mat[i][j] < min) {
                min = mat[i][j];
            }
        }
    }
    cout<<"Minimalen element vo matricata e: "<<min<<endl;

    // transformacija na matricata
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < k;  j++) {
            mat[i][j] = min;
        }
    }

    cout<<"Izgled na matricata po transformacija: "<<endl;
    for(int i=0;i<m;i++) {
        for (int j = 0; j < n; j++) {
            cout<<mat[i][j]<< " ";
        }
        cout<<endl;
    }


}