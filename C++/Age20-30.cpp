#include <iostream>
using namespace std;

int main () {

    int age;
    int a;
    cout << "Enter your age!\n";
    cin >> age;

    if (age > 20 && age < 30) {
        a = 1;
    } else {
          a = 0;
    }

    cout << a;

    return 0;
}
