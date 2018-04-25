#include <iostream>
#include "Queue.h"
using namespace std;

Queue::Queue(int size) :mSize(size)
{
    arr = new int[size];
    start = 0;
    
}

Queue::Queue(const Queue& q)
{
    for(int i=0; i < mSize; i++){
	arr[i] = q[i];
        start++;
    }
}

Queue::~Queue()
{
    delete [] arr;
}

int Queue::size()
{
    return start;
}

void Queue::enqueue(int n)
{
    if(start == (mSize-1)){
	cout << "Queue is full!\n";
    } else {
	arr[start++] = n;
    }

}
int Queue::dequeue()
{
    int value = arr[0];
    for(int i=1; i <= start; i++){
	arr[i-1] = arr[i];
    }
    start--;
    return value;
}

bool Queue::empty()
{
    return (!start);
}

int Queue::front()
{
    return arr[start-1];
}

int Queue::back()
{
    return arr[0];
}

int& Queue::operator[](unsigned int n) const
{
    static int a =-1;
    if(n >= mSize){
        cout << "We do not have such an index!\n";
        return a; 
    } 
    return arr[n];
}
