#include <iostream>
#include <string>
using namespace std;

int main () {
    int a, age;
    string name;

    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;

    if (name == "Mariam" && age == 21) {
        a = 1;
        cout << a;
    } else {
          a = 0;
          cout << a;
    }

    return 0;
}






