// prvo sakam da inicijaliziram niza so n elementi
// sakam da vmetnam n elementi vo nizata od konzola
// i potoa sakam da prebrojam kolku elementi vo nizata se parni a kolku neparni broevi
// sakam da inicijaliziram novi nizi sto kje imaat ednakvo elementi na parni i neparni broevi
// sakam da ispecatam samo parni i samo neparni broevi
// vlez: n (br.elementi)

#include<iostream>
#include <pstl/execution_defs.h>
using namespace std;

int izbrojParniElementi(int niza[], int n) {
    int parniBroeviCounter = 0;
    for (int i = 0; i < n; i++) {
        if (niza[i] % 2 == 0) parniBroeviCounter++;
    }
    return parniBroeviCounter;
}

int izbrojNeparniElementi(int niza[], int n) {
    int neparniBroeviCounter = 0;
    for (int i = 0; i < n; i++) {
        if (niza[i] % 2 != 0) neparniBroeviCounter++;
    }
    return neparniBroeviCounter;
}

void vratiParni(int niza[], int n, int parnaNiza[]) {

    int j = 0;
    for (int i = 0; i < n; i++) {
        if (niza[i] % 2 == 0) {
            parnaNiza[j] = niza[i];   // niza: 1 4 9 6 8
            j++;
        }
    }

    for (int k = 0; k < j; k++) {
        cout << parnaNiza[k] << " ";
    }
}

void vratiNeparni(int niza[], int n, int parnaNiza[]) {

    int j = 0;
    for (int i = 0; i < n; i++) {
        if (niza[i] % 2 != 0) {
            parnaNiza[j] = niza[i];   // niza: 1 4 9 6 8
            j++;
        }
    }

    for (int k = 0; k < j; k++) {
        cout << parnaNiza[k] << " ";
    }
}

int main() {
    int n;
    cin >> n;
    int niza[n];

    for (int i = 0; i < n; i++) {
        cin >> niza[i];
    }

    int parniBroeviCounter = izbrojParniElementi(niza, n);
    int neparniBroeviCounter = izbrojNeparniElementi(niza, n);

    cout<<parniBroeviCounter<<endl;
    cout<<neparniBroeviCounter<<endl;

    int parnaNiza[parniBroeviCounter];
    int neparnaNiza[neparniBroeviCounter];

    cout<<"Nizata so parni broevi: "<< endl;
    vratiParni(niza, n, parnaNiza);
    cout<<"Nizata so neparni broevi: "<< endl;
    vratiNeparni(niza, n, neparnaNiza);
}