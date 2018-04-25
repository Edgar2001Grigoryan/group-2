#include <iostream>
#include "Queue.h"
using namespace std;


int main(){

    Queue q(10);
    for(int i=0; i < 5; i++){
        q.enqueue(10*i);
    }
    cout << q.size() << "\n"; 
    q.dequeue();
    q.dequeue();
    cout << q.size() ;     
    return 0;
}
