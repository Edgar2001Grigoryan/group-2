#include <iostream>
using namespace std;

int main () {
    int age;
    int a;

    cout << "Enter your age!\n";
    cin >> age;

    a = (age > 20 && age < 30) ? 1 : 0;

    cout << a;

    return 0;
}
