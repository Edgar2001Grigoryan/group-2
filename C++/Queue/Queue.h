#ifndef QUEUE_H
#define QUEUE_H
class Queue{

    private:
        int start;
        int *arr;
        int mSize;
    public:
        Queue(int size);
        ~Queue();
        Queue(const Queue& q);
        int size();
        void enqueue(int n);
        int dequeue();
        bool empty();
        int front();
        int back();
        int& operator[](unsigned int n) const;
};

#endif
