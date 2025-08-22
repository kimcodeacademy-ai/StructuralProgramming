//
// Created by kimov on 8/21/2025.
//

#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int *p;
    p = &n;
    cout<<"Vrednosta na n e: "<<n<<endl;
    cout<<"Vrednosta na p bez zvezdicka ee: "<<p<<endl;
    cout<<"Vrednosta na p so zvezdicka e: "<<*p<<endl;

    int *q;
    q = p;
    *q = 12;
    cout<<"Vrednosta na n e: "<<n<<endl;
    cout<<"Vrednosta na p bez zvezdicka ee: "<<p<<endl;
    cout<<"Vrednosta na p so zvezdicka e: "<<*p<<endl;

    int b = 30;
    p = &b;
    *p = *q;

    *q = 45;

    cout<<"Vrednosta na n e: "<<n<<endl;
    cout<<"Vrednosta na b e: "<<b<<endl;

    return 0;

}