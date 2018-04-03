#include <iostream>
#include <string>
using namespace std;

string result = "YES";
string str;
int len;

void Func (int n = 0) {

    if (n != (len-1) && n != len) {
        if (str[n/2] == str[len-1-n/2]) {
            Func (n+2);
        } else {
            result = "NO";
            return;
        }
    }
}

int main () {
    
    cout << "Enter the word!\n";
    cin >> str;
    len = str.length ();
    Func ();    
    cout << result << "\n";
    return 0;

}
