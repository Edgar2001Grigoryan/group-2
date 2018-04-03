#include <iostream>
using namespace std;

int main () {

    int l;
    cout << "Enter height!\n";
    cin >> l;
    int m = 0;

    for (int i = 0; i < l; i++) {          
        m++;

        for (int j = 0; j < i; j++ ){       
            cout << " ";
        }

        for (int k = l; k  > (m - 1); k-- ){       
            cout << "*";
        }
    cout << "\n";
    }

    return 0;
}

