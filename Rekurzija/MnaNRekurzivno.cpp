// da se presmeta rekurzivno m^N

#include <iostream>
using namespace std;

// rekurzivno da se presmeta: 2^3 = 8;

int vratiPresmetka(int m, int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return m * vratiPresmetka(m, n-1);
    }
}
int main() {

    int m, n;
    cin >> m >> n;

    cout<<vratiPresmetka(m, n);

}