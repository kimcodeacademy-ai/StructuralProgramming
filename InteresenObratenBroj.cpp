// // Eден природен e „интересен“ ако неговиот обратен број е делив со неговиот број на цифри. Обратен број е бројот составен од истите цифри,
// // но во обратен редослед (на пример, 653 е обратен број на бројот 356). Од тастатура се внесува природен број n ( n > 9).
// // Да се најде и отпечати најголемиот природен број помал од n кој што е „интересен“.
// // Ако внесениот број не е валиден, да се отпечати соодветна порака (Brojot ne e validen).
//
//
// // za interesniot broj sto ke go najdeme da go pomnozime so 50 i da izbroime kolku cifri ke ima toj broj
//
//
// #include <iostream>
// using namespace std;
//
// // tip_na_promenliva, ime (parametri od razlicni tipovi){
// // nekoja logika
// // na kraj ni vraka rezultat
// // }
//
// int brojCifri(int broj) {
//    int counter = 0;
//    int t = broj;
//    for (t; t > 0; t/=10) {
//       counter++;
//    }
//    return counter;
// }
//
// int obratenBroj(int broj) {
//    int reverse = 0;
//    for (broj; broj > 0; broj/=10) {
//       reverse=(reverse*10)+(broj%10);
//    }
//    return reverse;
// }
//
//
// int main() {
//    int n;
//    cin>>n;
//
//    if (n <= 9) {
//       cout<<"Your number is smaller than 9";
//       return 0;
//    }
//
//    int interesen = 0;
//    for (int i = n-1; i > 9; i--) {
//       // prebrneme brojot naopaku
//       int number = i, reverse = 0;
//       // for (number; number > 0; number/=10) {
//       //    reverse=(reverse*10)+(number%10);
//       // }
//       reverse = obratenBroj(number);
//
//       // izbroime cifrite
//       //ova se naogja vo funkcija
//       // int t = i;
//       // for (t; t > 0; t/=10) {
//       //    counter++;
//       // }
//
//       int counter = brojCifri(i);
//
//
//       if (reverse % counter == 0) {
//          cout<<i<<endl;
//          int novBrojPomnozen = i*50;
//          //int counterPomnozen = brojCifri(novBrojPomnozen);
//          int counterPomnozen = 0;
//          int t = novBrojPomnozen;
//          for (t; t > 0; t/=10) {
//              counterPomnozen++;
//          }
//
//          cout<<counterPomnozen<<endl;
//          break;
//       }
//    }
//
//    return 0;
// }
