#include <iostream>
using namespace std;

long int result = 1;
int n;

void Astichan (int k) {

    if (k != 0) {
        result = result * n;
        Astichan (k-1);
    }
}



int main () {
    
    int k;
    cout << "Enter the first number!\n";
    cin >> n;
    cout << "Enter the second number!\n";
    cin >> k;
    Astichan (k);
    cout << result;
}
