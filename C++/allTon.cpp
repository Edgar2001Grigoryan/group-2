#include <iostream> 
using namespace std;

int main () {
    
    int k;
    cout << "Enter height!\n";
    cin >> k;
    int m = 0;

    for (int i = k; i > 0 ; i--) {
        m++;
        for (int j = 0; j < i; j++ ){
            cout << " ";
        }

        for (int k = 0; k < (2*m-1); k++ ){
            cout << "*";
        }
    cout << "\n";
    }
    
    return 0;
}

