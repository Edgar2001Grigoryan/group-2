#include <iostream>
#include "Vector.h"
using namespace std;


int main(){

    Vector vector(10);
    cout << vector.empty();
    vector.push(10);
    cout << "\n" << vector.size() << "\n" << vector.getLast() << "\n" << vector.getFirst();
    vector.push(9);
    vector.push(2);
    cout << "\n" << "\n" << vector.getLast() << "\n" << vector.getFirst() << "\n";
    for(int i = 0; i < 5;i++){
        vector.push(i);
    }
    cout << vector[0];

    
    return 0;
}
