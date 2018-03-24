#include <iostream>
using namespace std;

long factorialKent = 1;
int k;

void FactorialKent (int n = 2) {
    if (n <= k) {
        factorialKent = factorialKent * n;
        FactorialKent (n + 2);
    }
}

int main () {

    cout << "Enter the number!\n";
    cin >> k;
    FactorialKent ();
    cout << factorialKent << "\n";


    return 0;

}

