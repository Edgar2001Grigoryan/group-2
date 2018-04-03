#include <iostream>
#include <string>
using namespace std;

int main () {

    string str;
    int age;

    cout << "Barev!\n";
    cin >> str;

    if (str == "barev") {

        cout << "Qani tarekans?\n";
        cin >> age;

        if (age < 18) {
            cout << "Hala malaletkays li!\n";
        } else {
            cout << "Uje chapahass li!\n";
        }

        cout << "Huncs?\n";
        cin >> str;

        if (str == "lav") {
            cout << "De misht ti lavel kac!\n";
        } else if (str == "normal") {

            cout << "Karoxa pena ilal?\n";
            cin >> str;

            if (str == "che") {
                cout << "De togda lavs li!\n";
            } else if (str == "ha") {
                cout << "Hincha ilal?\n";
                cin >> str;
                
                if (str == "gorcchonis") {
                    cout << "Lav))\n";
                    cout << "Paski asuumel. Nerakel inc!\n"; 
                    cout << "Yes qeci.\n" << "Hajox!";
                }
            }

        } else if (str == "pis") {
            cout << "Xe? Hincha ilal?\n";
            cin >> str;
            
            if (str == "gorcchonis") {
                cout << "Lav))\n";
                cout << "Yes qeci.\n" << "Hajox!\n";
            } else {
                cout << "Ta ski lavchi.\n";
                cout << "De bayc karelchum qyomag anim!\n";
                cout << "Hajox!\n";
            }
        }
    } else {
        cout << "Hajox!";
    }

    return 0;
}
