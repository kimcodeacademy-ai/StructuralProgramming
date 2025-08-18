// Да се напише програма која за матрица внесена од тастатура ќе ја пресмета
// разликата на збирот на елементите на непарните колони и збирот на
// елементите на парните редици. Матрицата не мора да биде квадратна.

#include  <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[n][m];

    for (int i = 0; i<n;i++) {
        for (int j = 0;j < m;j++) {
            cin>>arr[i][j];
        }
    }

    for (int i = 0; i<n;i++) {
        for (int j = 0;j < m;j++) {
            cout<<arr[i][j]<< " ";
        }
        cout<<endl;
    }

    int zbirNeparniKoloni = 0, zbirParniRedici = 0;
    for (int i = 0; i<n;i++) {
        for (int j = 0; j < m;j++) {
            if (j%2 != 0) {
                zbirNeparniKoloni += arr[i][j];
            }
            if (i%2 == 0) {
                zbirParniRedici += arr[i][j];
            }
        }
    }

    cout<<"Zbirot na neparnite koloni iznesuva "<<zbirNeparniKoloni<<endl;
    cout<<"Zbirot na parnite redici iznesuva "<<zbirParniRedici<<endl;
    cout<<"Razlikata ne neparnite koloni i parnite redici iznesuva "<<zbirNeparniKoloni - zbirParniRedici<<endl;
    return 0;
}