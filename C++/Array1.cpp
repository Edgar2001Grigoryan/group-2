#include <iostream>
using namespace std;

int main () {

    int arr[10];
    int mec = 0;
    int poqr = 0;
    int zuyger = 0;
    int kenter = 0;

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    mec = arr[0];
    poqr = arr[0];

    for (int i = 0; i < 10; i++) {
        if (arr[i] > mec) {
            mec = arr[i];
        }
        if (arr[i] < poqr) {
            poqr = arr[i];
        }
        if (arr[i] % 2 == 0) {
            zuyger += arr[i];
        } else {
            kenter += arr[i];
        }
    }
    
    cout << "Amenamec: " << mec << endl;
    cout << "Amenapoqr: " << poqr << endl;
    cout << "Zuygeri gumar: " << zuyger << endl;
    cout << "Kenteri gumar: " << kenter << endl;


    return 0;

}
