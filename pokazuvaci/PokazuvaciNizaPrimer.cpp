// Задача:
// Напиши програма што ќе внесе низа од N цели броеви. Со помош на покажувач:
// Испечати ги сите елементи на низата.
// Пронајди го најголемиот елемент во низата.

#include <iostream>
using namespace std;

// funkcijata naogja dali postoi takov element vo nizata, ako da togash mi vrakja indexot na kojn sto se naogja vo sprotivno -1
int pronajdiElementVoNiza(int *niza, int n, int element){
    for (int i = 0; i < n; i++) {
        if (*(niza+i) == element) {
            return i;
        }
    }
    return -1;
}

int main(){
    int N;
    cin>>N;

    // ova e isto: arr[i] i *(arr+i)
    int arr[N];
    for (int i = 0; i < N; i++) {
        //cin>>arr[i];
        cin >> *(arr + i);
    }

    for (int i = 0; i < N; i++) {
        cout << *(arr + i)<< " ";
    }

    int *maxElement;
    maxElement = arr; // max element pokazuva kon prviot element vo nizata
    //int maxElement = *(arr);
    for (int i = 0; i < N; i++) {
        //if (arr[i] > maxElement)
        // if (*(arr + i) > maxElement) {
        //     maxElement = *(arr+i);
        // }
        if (*(arr+i) > *maxElement) {
            maxElement = arr+i;
        }
    }
    cout << endl;
    cout << *maxElement << endl;

    cout<<"Emenenton 3 e na pozicija: "<< pronajdiElementVoNiza(arr,N, 3);
    return 0;
}
