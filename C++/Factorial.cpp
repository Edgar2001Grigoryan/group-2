#include <iostream>
using namespace std;

unsigned long long factorial = 1;
int n;

void Factorial (int n) {

    if (n != 1 ) {
        factorial = factorial * n;
        Factorial(n - 1);
    }
}


int main () {
    
    cout << "Enter the number!\n";
    cin >> n;
    Factorial(n); 
    cout << factorial;

return 0;

}
