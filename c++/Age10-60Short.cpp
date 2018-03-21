#include <iostream>
using namespace std;

int main () {
    int a, age;
    cout << "How old are you? \n";
    cin >> age;

    a = (age < 10 || age > 60) ? 1 : 0;
    std::cout<<a;

    return 0;
}



























