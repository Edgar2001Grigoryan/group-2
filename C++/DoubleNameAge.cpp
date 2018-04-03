#include <iostream>
#include <string>
using namespace std;

int main () {

    string userName;
    string pairName;
    int userAge;
    int pairAge;
   
    cout << "Enter user's name!\n";
    cin >> userName;
    cout << "Enter pair's name!\n";
    cin >> pairName;
    cout << "Enter user's age!\n";
    cin >> userAge;
    cout << "Enter pair's age!\n";
    cin >> pairAge;

    if ((userName == "Mariam" && userAge == 21) || (pairName == "Edgar" && pairAge == 16 )) {
        cout << "1";
    } else {
          cout << "0";
    }

    return 0;
}
