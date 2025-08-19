// За даден цел број n (n>0) да се отпечати
// опаѓачката низа броеви, почнувајќи од n,
// завршувајќи со 1

// За даден број n да се отпечати растечка низа броеви, почнувајќи од па се до n.

// n= 5, 5 4 3 2 1
#include <iostream>
using namespace std;

void otpecatiOpagjacka(int n) {
    if (n >= 1) {
        cout<<n<<" "<<endl;
        return otpecatiOpagjacka(n-1);
    }
    else {
        return;
    }
}

int main() {

    int n = 5;

    otpecatiOpagjacka(n);
    cout<<endl;
}