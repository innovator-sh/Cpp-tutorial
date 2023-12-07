// Finding the largest element in an Array using Pointer

#include <iostream>
using namespace std;

int main() {

    int a[] = {100, 30, 5, 60, 20, 290};
    int i, lar, *p;

    p=&a[i];

    lar = *p;

    for(i=0; i<6; i++) {
        if(*p > lar){
            lar = *p;
        }
        p++;
    }

    cout << "Largest element : " << lar;

    return 0;
}