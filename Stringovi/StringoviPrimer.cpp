#include <iostream>
#include <cstdio> // za puts
#include <cstring> // za strlen
#include<string>  // za genericki funkcii kako: toupper, strcpy
using namespace std;

int main() {

    // const int n1 = 30;
    // const int n2 = 15;
    //
    // char fullName[n1];
    // char word[n2];
    //
    // cout<<"Vnesi ime i prezine: ";
    // //cin>>fullName;
    // cin.getline(fullName, n1);
    // cout<<fullName;
    // cout<<endl;
    //
    // cout<<"Vnesi omilen zbor: ";
    // cin >> word;
    //
    // puts(fullName);
    // puts(word);
    //
    // // Manipulacija so pokazuvaci i string funkcii
    // char *p = fullName;
    // if (strlen(fullName) > 0) {
    //     *(p) =  toupper(*(p));
    // }
    //
    // cout<<"Posle promenata na prvata bukva vo golema: "<< fullName << endl;
    //
    // // strcpy
    // //strcpy(fullName, word);
    // char copyName[n1] = "Prazna";
    // strcpy(copyName, fullName);
    // cout<< "Vrednosta vo copyname sega e: "<< copyName << endl;
    //
    // // strcat
    // strcat(copyName, word); // konkatanacija
    // cout<< "Vrednosta na copy name posle strcat e: "<< copyName << endl;
    // cout<< "Vrednosta na word posle strcat e: "<< word << endl;
    //
    // //strlen
    // cout<<"Dolzinata na fullname e: "<< strlen(fullName) << " karakteri"<<endl;
    //
    // // sporedba na stringovoi
    char zbor1[] = "abc";
    char zbor2[] = "abd";

        // string s1("Geeks");
        // string s2("Geekswsadsda");

    // if (s1 > s2) {
    //     cout << "Zbor 1 e pogolemo od zbor2" << endl;
    // }
    // else if (s1  < s2) {
    //     cout << "Zbor 1 e pomalo od zbor2" << endl;
    // }
    // else {
    //     cout << "Tie se ednakvi";
    // }

    int cmp = strcmp(zbor1, zbor2);
    if (cmp == 0) {
        cout<<"isti";
    }
    else if (cmp == 1) {
        cout<<"zbor 1 e pogolem";
    }
    else {
        cout<<"zbor 2 e pogolem";
    }

    return 0;
}
