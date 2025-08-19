// napishi rekurziven algoritam za presmetuvanje na faktoriel na nekoj bro

#include<iostream>
using namespace std;

int faktoriel(int broj) {
    if (broj == 1) {
        return 1;
    }
    else {
        return broj * faktoriel(broj - 1);
    }
}

int main() {
    int broj; // tuka na vlez imame 5ka
    cin >> broj;

    cout<<"faktoriel na brojot rekurzivno: "<<broj<<" iznesuva: "<<faktoriel(broj) << endl;

    int faktorielProizvod = 1;
    for (int i = 1; i <= broj; i++) {
        faktorielProizvod *= i;
    }
    cout<<"faktoriel na brojot regularno: "<<broj<<" iznesuva: "<<faktorielProizvod;

}

