// Од стандарден влез се внесуваат два цели броја N и Х.
//
// Да се најде најблискот број помал од N коj е тотално различен од бројот Х.
//
// Еден број е тотално различен од друг ако и само ако во него не се појавува ниту една од цифрите на другиот број.
//
// Задачата да се реши без употреба на низи и матрици.
//
// For example:
//
// Input    Result
// 88 7
// 86

#include <iostream>
using namespace std;

bool totallyDifferent(int x, int n) {
   int tmpN = n;
    while (tmpN > 0) {
        int digitN = tmpN % 10;
        int tmpX = x;
        while (tmpX > 0) {
            int digitX = tmpX % 10;
            if (digitN == digitX) {
                return false;
            }
            tmpX = tmpX / 10;
        }
        tmpN /= 10;
    }
    return true;
}

int main() {
    int n,x;
    cin >> n >> x;

    int result = 0;
    for (int i = n-1; i > 0; i--) {
        if (totallyDifferent(x, i)) {
            result = i;
            break;
        }
    }

    cout<< result << endl;
    return 0;
}