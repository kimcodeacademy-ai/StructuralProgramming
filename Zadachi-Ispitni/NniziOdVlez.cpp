// se vnesuvaat N nizi od vlez, da se proveri dali nizite se palindrom(vo posebna funcija) i ako ima povekje da se ispecati najmalata niza najdena palindrom niza.

// palindrom - zbor, niza, recenica sto se cita isto odnapred i odnazad
#include <iostream>
using namespace std;

bool isPalindrome(int *niza, int n) {
    bool palindrome = true; // flag
    int pocetok = 0, kraj = n-1;
    while (pocetok != kraj && pocetok < kraj) {
        int pocetokElement = niza[pocetok];
        int krajElement = niza[kraj];
        if (pocetokElement != krajElement) {
            palindrome = false;
            break;
        }
        pocetok++;
        kraj--;
    }
    return palindrome;
}

int main() {
    int brojNizi;
    cout << "Vnesi broj na nizi: "<< endl;
    cin >> brojNizi;

    int krajNiza[1000];
    int najmalaPalindromNiza = -1;
    // ovoj for ciklus vnesuva nizi onolku kolku sto e brojNizi
    for (int i = 0; i < brojNizi; i++) {
        // vnesi broj na elementi vo niza
        int n;
        cout<< "Vnesi broj na elementi vo niza: "<< endl;
        cin >> n;
        // inicijaliziraj niza so tolku elementi
        int niza[n];

        cout<< "Vnesi elementi vo niza: "<<n<<endl;
        for (int j = 0; j < n; j++) {
            cin >> niza[j];
        }

        // for (int j = 0; j < n; j++) {
        //     cout << niza[j] << " ";
        // }
        // cout << endl;

        if (isPalindrome(niza, n)) {
            cout << "Palindrome" << endl;
            // ako dosega ne bila najdena niedna palindrom niza
            if ( najmalaPalindromNiza == -1) {
                najmalaPalindromNiza = n;
                for (int  k = 0; k < n; k++) {
                    krajNiza[k] = niza[k];
                }
            }
            else {
                if (n < najmalaPalindromNiza) {
                    najmalaPalindromNiza = n;
                    for (int  k = 0; k < n; k++) {
                        krajNiza[k] = niza[k];
                    }
                }
            }
        }
        else {
            cout << "not palindrome" << endl;
        }
    }

    cout << "Najmalata palindrom niza e: "<<endl;

    if (najmalaPalindromNiza != -1) {
        for (int i = 0; i < najmalaPalindromNiza; i++) {
            cout << krajNiza[i] << " ";
        }
    }
}