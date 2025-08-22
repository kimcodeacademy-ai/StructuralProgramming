// Напиши програма која ќе чита редови од стандардниот влез (SI) и ќе ги печати на стандардниот излез (SO) редовите, претходени
// со односот (ratio) на големи/мали букви во секој ред.
//
// На крај, испечати го бројот на редот со најголемиот однос на големи/мали букви.
//
// Пример
//
// Влез:
//
// So, so you think you can tell Heaven from Hell,
// blue skies From Pain.
// Can you tell a Green Field From a cold steel rail?
// A smile from a veil?
// Do you think you can tell?
// And did they geT you to Trade Your heroes for ghosts?
// Hot ashes for trees?
//
//
// Излез:
//
// 0.09 So, so you think you can tell Heaven from Hell,
// 0.13 blue skies From Pain.
// 0.11 Can you tell a Green Field From a cold steel rail?
// 0.07 A smile from a veil?
// 0.05 Do you think you can tell?
// 0.11 And did they geT you to Trade Your heroes for ghosts?
// 0.07 Hot ashes for trees?
// 1


#include <cstring>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {

    const int MAX_LEN = 256;
    // char line[] = "sdadsasd"
    char line[MAX_LEN];

    double bestRatio = -1.0;
    int bestLine = 0;
    int lineNumber = 0;

    while (true) {
        // "\n"
        cin.getline(line, MAX_LEN);
        // kolkava e goleminata na linijata sto ja citam
        if (strlen(line) == 0) {
            break;
        }

        int upper = 0, lower = 0;
        int len = strlen(line);
        for (int i = 0; i < len; i++) {
            char c = line[i];
            if (isalpha(c)) {
                if (isupper(c)) {
                    upper++;
                }
                else if (islower(c)) {
                    lower++;
                }
            }
        }

        double ratio = 0.0;
        if (lower > 0) {
            ratio = (double)upper/lower;
        }

        cout << fixed << setprecision(2) << ratio << " " << line << endl;
        if (ratio > bestRatio) {
            bestRatio = ratio;
            bestLine = lineNumber;
        }

        lineNumber++;
    }

    cout << bestLine << endl;
    return 0;
}
