// Од стандарден влез се внесуваат непознат број на реченици претставени преку текстуални низи (стрингови) секоја не подолга од 100 знаци
// и секоја во нов ред. Програмата треба да го најде стрингот кој содржи најмногу сврзници и да го испечати заедно со бројот на најдените сврзници.
// За сврзници се сметаат сите зборови составени од една, две или три букви. Зборовите во текстуалната низа се одделени со едно или повеќе прзани места и/или интерпункциски знак.
//
// Броењето на сврзници во дадена текстуална низа треба да се реализира во посебна функција. Решенијата без користење функција ќе бидат оценети со најмногу 40% од поените.
//
// Ако има повеќе реченици со ист максимален број на сврзници, се печати прво најдената.
//
// Објаснување на тест примерот:
// Бројот на сврзници по реченици е 2, 3, 4, 2, 4 и 7 соодветно. Најмногу сврзници има по последната реченица па се печати бројот 7 и содржината на таа реченица.
//
//
// For example:
//
// Input	Result
// Svrznicite vo makedonskiot jazik se sluzbeni zborovi
// odnosno niv gi upotrebuvame za povrzuvanje oddelni zborovi
// vo ramkite na edna recenica ili poveḱe recenici vo edna slozena recenica.
// Pri povrzuvanjeto, svrznicite gi izrazuvaat odnosite megju zborovite
// ili megju recenicite, pa taka sprotiven odnos se iskazhuva so
// ama ili no, a usloven odnos so ako itn.
// 7: ama ili no, a usloven odnos so ako itn.


#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int countSvrznici(char line[]) {
    int count = 0;
    int len = strlen(line);
    int wordLen = 0;

    // nul karakterot

    for (int i = 0; i <= len; i++) {
        if (isalpha(line[i])) {
            wordLen++;
        }
        else {
            if (wordLen > 0 && wordLen <= 3) {
                count++;
            }
            wordLen = 0;
        }
    }
    return count;
}
int main() {
    char line[100];
    char bestLine[105];
    int maxCount = 0;
    //cin.get(line, 100).get();
    while (cin.getline(line, 100)) {
        if (strlen(line) == 0) {
            break;
        }
        int c = countSvrznici(line);
        if (c > maxCount) {
            maxCount = c;
            strcpy(bestLine, line);
        }
    }

    if (maxCount >= 0) {
        cout << maxCount << ": " << bestLine << endl;
    }
    return 0;
}


