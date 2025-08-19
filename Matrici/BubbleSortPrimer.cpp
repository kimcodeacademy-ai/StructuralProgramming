#include <iostream>
using namespace std;

// Bubble sort функција
void bubbleSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int par(int a[], int n) {
    bubbleSort(a, n);

    int i = 0;
    while (i < n) {
        int current = a[i];
        int count = 0;

        while (i < n && a[i] == current) {
            count++;
            i++;
        }

        if (count % 2 == 0) {
            return current;
        }
    }

    return 0;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int result = par(a, n);
    if (result != 0)
        cout << "Najmaliot element koj se pojavuva paren broj pati e " << result << endl;
    else
        cout << "Ne postoi element koj se pojavuva paren broj pati" << endl;

    return 0;
}
