#include <iostream>
#include <cstdlib>
using namespace std;


int main () {

    int size;
    cout << "Massisvi chaps@:";
    cin >> size;
    int * arr = (int *) calloc(size, sizeof(int));
    srand(time(0)); 
    for (int i = 0; i < size; i++ ) {
        cin >> arr[i];
    }
    int number;
    cout << "Mtcreq tiv@: ";
    cin >> number;
    for (int i = 0; i < size; i++) {
        if (arr[i] == number) {
            cout << (i+1) << " ";
    }
    }
    cout << "\n";
    for (int i = 0; i < size; i++) {
        cout << "arr[" << (i+1) << "] = " << arr[i] << "\n";
    }
    return 0;
}
