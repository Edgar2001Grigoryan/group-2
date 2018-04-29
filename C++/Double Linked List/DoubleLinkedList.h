#ifndef DOUBLELINKEDLIST_H
#define DOUBLELINKEDLIST_H

class DoubleLinkedList{

    private:
	struct Node{
            int value;
            Node* next;
	    Node* prev;
        };
	Node* lastNode;
        Node* firstNode;
        int size;
        void* findNodeByIndex(int index) const;
    public:
        DoubleLinkedList();
        DoubleLinkedList(const DoubleLinkedList& list);
        ~DoubleLinkedList();
        void insert(int value, unsigned int index);
        void remove(unsigned int index);
        int find(int value);
        int length();
        int& operator[](unsigned int i);
};

#endif
