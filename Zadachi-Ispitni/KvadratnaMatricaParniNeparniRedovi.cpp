// da se napishe kvadratnata matrica N(n od standard input), kade parnite redovi se pecatat od levo kon desno, a neparnite od desno kon levo
// pr. input:4
// output:
// 1 2 3 4
// 8 7 6 5
// 9 10 11 12
// 16 15 14 13

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int mat[n][n];

    int counter = 1;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++) {
                mat[i][j] = counter;
                counter++;
            }
        }
        else {
            for (int j = n-1; j >= 0; j--) {
                mat[i][j] = counter;
                counter++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}