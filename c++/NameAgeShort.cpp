#include <iostream>
#include <string>
using namespace std;

int main () {


    string name;
    int age;
    int a;

    cout << "What is yourn name?\n";
    cin >> name;
    cout << "Enter your age!\n";
    cin >> age;

    a = (name == "Mariam" && age == 21) ? 1 : 0;
    cout << a;

    return 0;
}
