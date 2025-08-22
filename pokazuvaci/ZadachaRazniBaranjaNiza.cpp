// Напиши програма во C++ што:
// Внесува низa од N цели броеви.
// Со покажувачи:
// Испечат ги сите елементи на низата.
// Пронајди го најголемиот и најмалиот елемент.
// Изброи колку пати се појавува секој елемент во низата.
// Замени го секој елемент со неговиот квадрат.
// Сите операции мора да се прават преку покажувачи, без директен пристап со arr[i].
//
// Влез:
// 5
// 2 3 2 5 3
//
//
// Излез:
// Elementite od nizata se: 2 3 2 5 3
// Najgolem broj: 5
// Najmal broj: 2
// Broj na pojavuvawe:
// 2 -> 2 pati
// 3 -> 2 pati
// 5 -> 1 pati
// Niza so kvadrati: 4 9 4 25 9


#include <iostream>
using namespace std;

int pronajdiElementVoNiza(int *niza, int n, int element){
    for(int i = 0; i < n; i++){
        if(*(niza + i) == element){
            return i;
        }
    }
    return -1;
}

void brojPojavuvanja(int *niza, int n){
    for(int i = 0; i < n; i++){
        bool isCounted = false;
        for(int j = 0; j < i; j++){
            if (*(niza + i) == *(niza + j)){
                isCounted = true;
                break;
            }
        }
        if (!isCounted){
            int count = 0;
            for(int j = 0; j < n; j++){
                if (*(niza + i) == *(niza + j)) count++;
            }
            cout << *(niza + i) << " -> " << count << " pati" << endl;
        }
    }
}

int main(){
    int N;
    cout << "Vnesi golemina na niza: ";
    cin >> N;

    int arrObicna[N];
    int *arr = arrObicna;

    cout << "Vnesi " << N << " elementi: ";
    for(int i = 0; i < N; i++){
        cin >> *(arr + i);
    }

    cout << "Elementite od nizata se: ";
    for(int i = 0; i < N; i++){
        cout << *(arr + i) << " ";
    }
    cout << endl;

    int *maxEl = arr;
    int *minEl = arr;
    for(int i = 1; i < N; i++){
        if (*(arr + i) > *maxEl) maxEl = arr + i;
        if (*(arr + i) < *minEl) minEl = arr + i;
    }

    cout << "Najgolem broj: " << *maxEl << endl;
    cout << "Najmal broj: " << *minEl << endl;

    cout << "Broj na pojavuvanje:" << endl;
    brojPojavuvanja(arr, N);

    for(int i = 0; i < N; i++){
        *(arr + i) = (*(arr + i)) * (*(arr + i));
    }

    cout << "Niza so kvadrati: ";
    for(int i = 0; i < N; i++){
        cout << *(arr + i) << " ";
    }
    cout << endl;

    return 0;
}