#include <iostream>
using namespace std;


int main () {
    int x,y;
    long sum;
    cout << "Mtcreq arajin tiv@\n";
    cin >> x;
    cout << "Mtcreq yerkrord tiv@\n";
    cin >> y;
    if (y < x) {
        cout << "\nArajin tiv@ mece yerkrodic!";
        return 0;
    } else {
        sum = 0;
        for (int i = x; i <= y; i++) {
            if (i % 2 == 0) {
                sum += i;
            }
        }
        cout << "Gumar@:" << sum; 
    }

    return 0;
}
