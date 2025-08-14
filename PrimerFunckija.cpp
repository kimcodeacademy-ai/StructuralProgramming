// preku funkcija povikaj nekoj broj i toj broj pomnozi go so 111

#include <iostream>
using namespace std;

// tip na promenliva sto se vrakja, ime na funkcijata (tip na param1, tip na param2, .. .. .. )
int pomnozena(int broj) {
    int novBroj = broj * 111;
    cout<<novBroj<<endl;

    return novBroj; // return tip
}

void ispecatiPomnozen(int broj) {
    cout<<broj<<endl;
}
// int -> celi broevi
// long -> golemi celi broevi
// float -> decimal broeiv, double -> golemi decimalni broevi
// char -> karakteri, bool -> true/false, string -> nizi od karakteri
// void -> ne vrakja nisto, nema poseben podatocen tip vo nego

int main() {
    int n;
    cin>>n;

    int newBr = pomnozena(n);

    ispecatiPomnozen(newBr);

    //cout<<newBr<<endl;

    return 0;
}
