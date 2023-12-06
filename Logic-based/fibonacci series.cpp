#include <iostream>
using namespace std;

int main() {
    
    int ft=0, st=1, tt;
    int n, i;

    cout << "Enter number of elements : ";
    cin >> n;

    cout << ft << endl << st << endl;

    for(i=0; i<n; i++) {
        tt = ft+st;
        cout << tt << endl;
        ft=st;
        st=tt;
    }

    return 0;
}