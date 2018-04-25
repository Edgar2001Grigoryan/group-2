#include <iostream>
#include "SingleLinkedList.h"
using namespace std;


int main(){

    SingleLinkedList sll;
    cout << sll.length();
    sll.insert(10,0);
    cout << "\n" << sll.length() << "\n";
    sll.insert(9,1);
    sll.insert(2,2);
    cout << sll.find(10);
    for(int i = 0; i < 5;i++){
        sll.insert(i,i+3);
    }
    cout << sll[5];


    return 0;

}
