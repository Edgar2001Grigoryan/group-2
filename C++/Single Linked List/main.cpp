#include <iostream>
#include "SingleLinkedList.h"
using namespace std;


int main(){

    SingleLinkedList sll;
    cout << sll.length();
    sll.insert(10);
    cout << "\n" << sll.length() << "\n";
    sll.insert(9);
    sll.insert(2);
    cout << sll.find(10);
    for(int i = 0; i < 5;i++){
        sll.insert(i);
    }
    cout << sll[5];


    return 0;

}
