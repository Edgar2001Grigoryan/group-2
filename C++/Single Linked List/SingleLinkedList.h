#ifndef SINGLE_LINKED_LIST_H
#define SINGLE_LINKED_LIST_H

struct Node{
    int value;
    Node* next;
};


class SingleLinkedList{

    private:
        Node* lastNode;
        Node* firstNode;
        int size;
        Node* findNodeByIndex(int index) const;
    public:
        SingleLinkedList();
        SingleLinkedList(const SingleLinkedList& list);
        ~SingleLinkedList();
        void insert(int value, unsigned int index);
        void remove(unsigned int index);
        int find(int value);
        int length();
        int& operator[](unsigned int i);
};

#endif
