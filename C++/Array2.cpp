#include <iostream>
using namespace std;
 


int main () {
    
    int arr[4][4];
  
    int karevor = 0;
    int karevoricVerev = 0;
    int karevoricNerqev = 0;
    int yerkrordayin = 0;
    int yerkrordayinicVerev = 0;
    int yerkrordayinicNerqev = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "arr[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
            if (i == j) {
                karevor += arr[i][j];
            }
            if ((i + j) == 3) {
                yerkrordayin += arr[i][j];
            }
            if (j > i) {
                karevoricVerev += arr[i][j];
            }
            if (i > j) {
                karevoricNerqev += arr[i][j];
            }
            if ((i + j) <= 2) {
                yerkrordayinicVerev += arr[i][j];
            }
            if ((i + j) >= 4) {
                yerkrordayinicNerqev += arr[i][j];
            }
        }
    }

    cout << "Karevor: " << karevor << endl;
    cout << "KarevoricVerev: " << karevoricVerev << endl;
    cout << "KarevoricNerqev: " << karevoricNerqev << endl;
    cout << "Yerkrordayin: " << yerkrordayin << endl;
    cout << "YerkrordayinicVerev: " << yerkrordayinicVerev << endl;
    cout << "YerkrordayinicNerqev: " << yerkrordayinicNerqev << endl;


    return 0;

}
