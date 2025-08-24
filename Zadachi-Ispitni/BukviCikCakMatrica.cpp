//  да се пополни матрица N x N со буквите A, B, C, D, E, F, G, H, I по редови, во змијовиден (цик-цак) облик, односно:
//
// редовите со парен индекс (0, 2, 4, ...) се пополнуваат од лево кон десно
//
// редовите со непарен индекс (1, 3, 5, ...) се пополнуваат од десно кон лево
//
// Буквите се користат циклично и по редослед, т.е. после буквата I, се продолжува пак од А.


#include<iostream>
using namespace std;


int main() {
    char bukvi[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I'};
    // currBukviIndex - index na momentalnata bukva sto ja popolnuvame
    // maxBukviIndex - koristime za proverka dali sme do maksimalniot broj na bukvi vo nizata
    int currBukviIndex = 0, maxBukviIndex = 8;

    int n;
    cin >> n;

    char matrica[n][n];

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++) {
                matrica[i][j] = bukvi[currBukviIndex];
                if (currBukviIndex < maxBukviIndex) {
                    currBukviIndex++;
                }
                else {
                    // znaci sme stigle do maxBukviIndex - vo ovj slucaj "I" i vo slednata iteracija ke pocneme povtorno od "A"
                    currBukviIndex = 0;
                }
            }
        }
        else {
            for (int j = n-1; j >= 0; j--) {
                matrica[i][j] = bukvi[currBukviIndex];
                if (currBukviIndex < maxBukviIndex) {
                    currBukviIndex++;
                }
                else {
                    // znaci sme stigle do maxBukviIndex - vo ovj slucaj "I" i vo slednata iteracija ke pocneme povtorno od "A"
                    currBukviIndex = 0;
                }
            }
        }
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrica[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}