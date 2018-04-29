#include <iostream>
#include "DoubleLinkedList.h"
using namespace std;



int main(){

    DoubleLinkedList dll;
    cout << dll.length();
    dll.insert(10,0);
    cout << "\n" << dll.length() << "\n";
    dll.insert(9,1);
    dll.insert(2,2);
    cout << dll.find(10);
    for(int i = 0; i < 5;i++){
        dll.insert(i,i+3);
    }
    cout << dll[5];


    return 0;

}
