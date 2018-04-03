#include <iostream>
using namespace std;

int main () {

    int k;
    cout << "Enter height!\n";
    cin >> k;

    for (int i = 0; i < k ; i++) {
        for (int j = i; j < k; j++) {
            cout << "*";
        }
    cout << "\n";
    }

    return 0;
}

