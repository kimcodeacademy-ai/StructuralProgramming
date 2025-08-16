// Задача 1:
// Цик-цак е број за кој што важи дека за секој пар соседни цифри, тие се наизменично поголеми односно помали една во однос на друга.
// На пример, ако бројот x е составен од цифрите a, b, c, d и е, тогаш за нив важи:
//
// a>b, b<c, c>d, d<e или a<b, b>c, c<d, d>e
//
// Пр. 343, 4624, 6231209
// Од тастатура се читаат непознат број цели броеви поголеми од или еднакви на 10 (броевите помали од 10 се игнорираат).
// Читањето завршува во моментот кога ќе се прочита знак што не е цифра. Да се испечатат сите цик-цак броеви.

#include<iostream>
using namespace std;

// tip na promenliva, ime na funkcija (parametri)
bool isZigZag(long n) {
    int prev = n%10;
    n /= 10;
    int curr = n%10;
    n /= 10;

    bool greaterFirst; // flag
    greaterFirst = curr > prev;

    int index = 0;

    while (true) {
        if (greaterFirst) {
            if (index % 2 == 0) {
                if (!(curr > prev)) return false;
            }
            else {
                if (!(curr < prev)) return false;
            }
        }
        else {
            if (index % 2 == 0) {
                if (!(curr < prev)) return false;
            }
            else {
                if (!(curr > prev)) return false;
            }
        }
        if (n == 0) {
            break;
        }
        prev = curr;
        curr = n%10;
        n/= 10;
        index++;
    }

    return true;
}


int main() {
    long num;
    while (cin >> num) {
        if (num >= 10 && isZigZag(num)) {
            cout<< num << endl;
        }
    }
    return 0;
}


// 1212
// 2121