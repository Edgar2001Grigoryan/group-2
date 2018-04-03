#include <iostream>
using namespace std;

int main () {

    int l;
    cout << "Enter height!\n";
    cin >> l;
    int m = 0;

    for (int i = l; i > 0 ; i--) {
        m++;
        for (int j = 0; j < i; j++ ){
            cout << " ";
        }

        for (int k = 0; k < m; k++ ){
            cout << "*";
        }
    cout << "\n";
    }

    return 0;
}

