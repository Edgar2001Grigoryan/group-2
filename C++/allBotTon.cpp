#include <iostream>
using namespace std;

int main () {

    int l;
    cout << "Enter height!\n";
    cin >> l;
    int m = l;

    for (int i = 0; i < l; i++) {
        m--;
        for (int j = 0; j < i; j++ ){
            cout << " ";
        }

        for (int k = (2*m + 1); k > 0; k-- ){
            cout << "*";
        }
    cout << "\n";
    }

    return 0;
}

