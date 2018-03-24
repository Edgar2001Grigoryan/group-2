#include <iostream>
using namespace std;

int n;
string str = "Parz e!";

void Func (int i = 2) {
    if (i < n) {
        if (n % i == 0) {
            str = "Baxadryal e!";
        } else {
            Func (i+1);
        }
    }
}

int main () {
    
    cout << "Enter the number!\n";
    cin >> n;
    Func ();
    cout << str << "\n";    

    return 0;

}
