#include <iostream>
using namespace std;

long n;

void Func () {

    if (n >= 10) {
        cout << (n % 10);
        n = n / 10;
        Func ();
    } else {
        cout << n;
    }
}

int main () {

    cout << "Enter the number!\n";
    cin >> n;
    Func ();  

    return 0;

}
