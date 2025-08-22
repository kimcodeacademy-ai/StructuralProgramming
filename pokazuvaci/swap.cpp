// swap zadacha so pokazuvachi i bez pokazhuvachi


#include<iostream>
using namespace std;

void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<< "Vnatre vo funkcijata swap "<<"A: "<< a << " B: "<< b<<endl;

}

void swapPokazuvaci(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    cout<< "Vnatre vo funkcijata swap so pokazuvaci "<<"A: "<< *a << " B: "<< *b<<endl;
}

int main() {
    int a, b;
    a = 10, b = 15;
    swap(a, b);
    cout << "A: "<< a << " B: "<< b<<endl;

    swapPokazuvaci(&a, &b);
    cout << "A: "<< a << " B: "<< b<<endl;

    return 0;
}