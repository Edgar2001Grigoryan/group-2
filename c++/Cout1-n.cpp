#include <iostream>
using namespace std;

int n;

void Cout (int i = 1) {
    if (n != (i - 1)) {
        cout << i << "\n";
        Cout(i + 1);
    }
}

int main () {

    cout << "Enter the number!\n";
    cin >> n;
    Cout();

return 0;

}
