// // Благ број е број што е составен само од парни цифри (0, 2, 4, 6, 8). Во зададен опсег (почетокот m и крајот на опегот n се цели броеви чија вредност
// // се внесува од тастатура),
// // да се најде и испечати најмалиот „благ број“. Ако не постои таков број, да се испечати NE.
//
// // Пример: 99 500 - Влез
// // Излез: 200 202
//
#include<iostream>
using namespace std;

int main() {
   int m, n, blagBroj;
   cin>>m>>n;

   for (m;m<=n;m++) {
      int tmp = m;
      bool flag = true;

      // for (tmp; tmp > 0; tmp = tmp/10 ) {
      //    int cifra = tmp%10;
      //    if (cifra % 2 != 0) {
      //       flag = false;
      //       break;
      //    }
      // }

      while (tmp > 0) {
         int cifra = tmp%10;
         if (cifra % 2 != 0) {
            flag = false;
            break;
         }
         tmp /= 10;
      }

      if (flag) {
         blagBroj = m;
         break;
      }
   }

   if (blagBroj) {
      cout<<blagBroj<<endl;
   }
   else {
      cout<<"No solution";
   }
}