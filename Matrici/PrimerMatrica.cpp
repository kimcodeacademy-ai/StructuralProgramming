// ednostaven primer so matrica

#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin>>n>>m;
    int arr[n][m];
    for (int i = 0; i<n;i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i<n;i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j];
        }
        cout << endl;
    }

    // da najdeme zbir na kolona br 1.
    int zbir = 0;
    for (int i = 0; i<n;i++) {
        zbir += arr[i][1];
    }
    cout<<"Zbirot na elementite vo matricata vo kolona 1 e: "<<zbir<<endl;

    // da najdeme zbir na redica broj 2
    int zbir1 = 0;
    for (int j = 0; j<m;j++) {
        zbir1 += arr[2][j];
    }

    cout<<"Zbirot na elementite vo matricata vo redica 2 e: "<<zbir1<<endl;



}