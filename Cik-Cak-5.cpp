// Цик-цак е број за кој важи дека за секој пар соседни цифри во бројот важи дека едната е помала од 5, а другата е поголема или еднаква на 5.
// На пример, ако бројот x е составен од цифрите a, b, c и d, тогаш за нив важи:
//
// a<5, b>=5, c<5, d>=5 или a>=5, b<5, c>=5, d<5
//
// Пр.  508294, 2638, 81
// Од тастатура се читаат непознат број на цели броеви поголеми од или еднакви на 10
// (броевите помали од 10 се игнорираат). Читањето завршува во моментот кога ќе се прочита знак што не е цифра. Да се испечатат сите цик-цак броеви.

#include<iostream>
using namespace std;

bool isZigZag(long long n) {
    int prev = n % 10;
    n /= 10;
    int curr = n % 10;
    n /= 10;

    bool lessFirst = (curr < 5 && prev >= 5);
    bool greaterFirst = (curr >= 5 && prev < 5);

    if (!lessFirst && !greaterFirst) return false;

    int index = 0;

    while (true) {
        if (lessFirst) {
            if (index % 2 == 0) {
                if (!(curr < 5 && prev >= 5)) return false;
            } else {
                if (!(curr >= 5 && prev < 5)) return false;
            }
        } else {
            if (index % 2 == 0) {
                if (!(curr >= 5 && prev < 5)) return false;
            } else {
                if (!(curr < 5 && prev >= 5)) return false;
            }
        }

        if (n == 0) break;

        prev = curr;
        curr = n % 10;
        n /= 10;
        index++;
    }

    return true;
}

int main() {
    long num;
    while (cin >> num) {
        if (num >= 10 && isZigZag(num)) {
            cout << num << endl;
        }
    }
    return 0;
}