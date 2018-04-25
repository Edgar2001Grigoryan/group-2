#ifndef VECTOR_H
#define VECTOR_H

class Vector{

    private:
        int *arr;
        unsigned int length;
        int iterator;
        int mSize;
        int delta;
        void enlargeCapacity();
    public:
        Vector(unsigned int size = 10);
        ~Vector();
	Vector(const Vector& vector);
        int size();
        void push(int n);
        int pop();
        bool empty();
        int getFirst();
        int getLast();
        int& operator[](unsigned int i);
        void init();
};

#endif
