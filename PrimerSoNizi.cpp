//
// Created by kimov on 8/16/2025.
//

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    char bukvi[n];
    char bukva;

    bool flag = false; // flag za dali bukvata postoi vo nizata

    for (int i = 0; i < n; i++) {
        cin >> bukvi[i];
    }

    cout<< "Vnesi bukva sto sakash da ja prebarash"<<endl;

    cin >> bukva;

    int pozicija = 0;
    for (int i = 0; i < n; i++) {
        if (bukvi[i] == bukva) {
            pozicija = i;
            flag = true;
            break;
        }
    }

    if (flag) {
        cout << "Bukvata "<< bukva << " e pronajdena vo nizata! na pozicija: "<< pozicija << endl;
    }
    else {
        cout << "Bukvata "<< bukva << " ne e pronajdena vo nizata!" << endl;
    }

    return 0;
}