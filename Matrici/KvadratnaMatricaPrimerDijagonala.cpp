// Да се напише програма која за матрица внесена од тастатура ќе ги замени
// елементите од главната дијагонала со разликата од максималниот и
// минималниот елемент во матрицата. Резултантната матрица да се испечати
// на екран

// kvadratna matrica imame ist broj na redici i koloni:
// i == j - elementi od glavna dijagonala

#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    if (n != m) {
        return 0;
    }
    int arr[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin>> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j]<< " ";
        }
        cout<<endl;
    }

    int min, max;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0 && j == 0) {
                min = arr[i][j];
                max = arr[i][j];
            }
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
            else if (arr[i][j] < min) {
                min = arr[i][j];
            }
        }
    }

    cout<<"Max element vo matricata e: "<<max<<endl;
    cout<<"Minimalen element vo matricata e: "<<min<<endl;

    // zameni gi elementite vo glavnata dijagonala so razlikata min i max

    int razlikataMinMax = max - min;

    for (int i = 0; i < n; i++) {
        // for (int j = 0; j < m; j++) {
        //     if (i == j) {
        //         arr[i][j] = razlikataMinMax;
        //     }
        // }
        arr[i][i] = razlikataMinMax;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j]<< " ";
        }
        cout<<endl;
    }

}