#include <iostream>
#include "Vector.h"
using namespace std;

void Vector::init()
{
    length = 0;
    iterator = 0;
    mSize = 0;
}

void Vector::enlargeCapacity()
{
     int *newArr = new int[mSize+delta];
     for(int i = (mSize-1); i >= 0; i--) {
         newArr[delta+i] = arr[i];
     }
     delete [] arr;
     arr = newArr;
     iterator+=delta;
     mSize+=delta;
}

Vector::Vector(unsigned int size) :delta(0)
{
    init();
    arr = new int[size];
    iterator = (size-1);
    mSize = size;
}

Vector::~Vector()
{
    delete [] arr;
}

int Vector::size()
{
    return length;
}

void Vector::push(int n)
{
    if(iterator == -1) {
	enlargeCapacity();
    }
    arr[iterator--] = n;
    length++;
}

void Vector::pop()
{
    length--;
}

bool Vector::empty(){
    return (!length);
}

int Vector::getFirst()
{
    return arr[mSize-1];
}

int Vector::getLast()
{
    return arr[mSize-length];
}

int& Vector::operator[](unsigned int i)
{
    static int a = -1;
    if(i > (mSize-1)){
	cout << "Error\n";
        return a;
    } else {
        return arr[mSize-1-i];
    }
}
