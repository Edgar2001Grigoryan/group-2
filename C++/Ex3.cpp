#include <iostream>
using namespace std;



int main () {

    int x;
    cin >> x;
    if (x == 1) {
        cout << "1";
        return 0;
    }
    int arr[x][x];
    for (int i=0; i < x; i++) {
        arr[0][i] = x*x-i;
        cout << arr[0][i];
    }

    
    return 0;
}
