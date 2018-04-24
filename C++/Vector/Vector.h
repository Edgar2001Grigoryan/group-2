#ifndef VECTOR_H
#define VECTOR_H

class Vector{

    private:
        int *arr;
        unsigned int length;
        int iterator;
        int mSize;
        const int delta;
        void enlargeCapacity();
    public:
        Vector(unsigned int size = 10);
        ~Vector();
        int size();
        void push(int n);
        void pop();
        bool empty();
        int getFirst();
        int getLast();
        int& operator[](unsigned int i);
        void init();
};

#endif
