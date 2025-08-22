// Read an integer k from SI, followed by lines of characters. Print on SO the read lines transformed in such a way that all the vowels
// in the line will be repeated k times.
//
// For example:
//
// Input	Result
//
// Do you ever wish you knew exactly what your dog is thinking? A team of designers from the Nordic Society for Invention
// and Discovery is playing Doctor Dolittle -- they've developed a doggie headset that can read animal brainwaves and translate them into human speech. That's just one of the many amazing scientific breakthroughs we've witnessed this week.
//
//
//
// Dooo yooouuu eeeveeer wiiish yooouuu kneeew eeexaaactly whaaat yooouuur dooog iiis thiiinkiiing? AAA teeeaaam ooof deeesiiigneeers frooom theee Nooordiiic Sooociiieeety fooor IIInveeentiiiooon aaand Diiiscoooveeery iiis plaaayiiing Doooctooor Doooliiittleee -- theeey'veee deeeveeelooopeeed aaa doooggiiieee heeeaaadseeet thaaat caaan reeeaaad aaaniiimaaal braaaiiinwaaaveees aaand traaanslaaateee theeem iiintooo huuumaaan speeeeeech. Thaaat's juuust oooneee ooof theee maaany aaamaaaziiing sciiieeentiiifiiic breeeaaakthrooouuughs weee'veee wiiitneeesseeed thiiis weeeeeek.


#include <cstring>
#include<iostream>
using namespace std;

bool isVowel(char c) {
    char lower = tolower(c);
    // if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
    //     return true;
    // }
    // else {
    //     return false;
    // }
    return lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u';
}

int main() {
    int MAX_LEN = 1000;
    int k;
    cin >> k;

    char line[MAX_LEN];
    char result[MAX_LEN];

    while (cin.getline(line, MAX_LEN)) {
        int len = strlen(line);
        int res_index = 0;
        for (int i = 0; i < len; i++) {
            char c = line[i];
            if (isVowel(c)) {
                for (int j = 0; j < k; j++) {
                    result[res_index] =  c;
                    res_index++;
                }
            }
            else {
                result[res_index] =  c;
                res_index++;
            }
        }

        result[res_index] = '\0';
        cout<< result << endl;
    }

    return 0;

}
