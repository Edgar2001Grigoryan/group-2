#include <iostream>
#include "DoubleLinkedList.h"
using namespace std;

void* DoubleLinkedList::findNodeByIndex(int index) const {
    if(index >= size){
        return NULL;
    }
    Node* tmp = this->firstNode;
    for(int i=1; i <= index; i++){
        tmp = tmp->next;
    }
    return tmp;
}


DoubleLinkedList::DoubleLinkedList() :size(0)
{

}

DoubleLinkedList::DoubleLinkedList(const DoubleLinkedList& list)
{
    for(int i=0; i < size; i++){
        insert(((Node*)list.findNodeByIndex(i))->value,i);
    }
}

DoubleLinkedList::~DoubleLinkedList()
{
    Node* tmp;
    for(int i=0; i < size; i++){
	tmp = firstNode->next;
        delete firstNode;
        firstNode = tmp;	
    }
}

void DoubleLinkedList::insert(int value, unsigned int index = 0)
{
    Node* newNode = new Node;
    newNode->value = value;
    if(index == 0){
        if(size == 0){
	    this->firstNode = newNode;
	    this->lastNode = newNode;
	    newNode->next = NULL;
	    newNode->prev = NULL;
	} else {
	    newNode->next = firstNode;
	    newNode->prev = NULL;
	    this->firstNode = newNode;
	}
    } else if(index == size){	
	if(size == 0){
	    this->firstNode = newNode;
	    this->lastNode = newNode;
	    newNode->prev = NULL;
	    newNode->next = NULL;
	} else {
  	    this->lastNode->next = newNode;
	    newNode->prev = this->lastNode;
	    newNode->next = NULL;
	    this->lastNode = newNode; 
	}
    } else {
	Node* prev = (Node*)findNodeByIndex(index-1);
	Node* next = prev->next;
	prev->next = newNode;
	newNode->prev = prev;
	newNode->next = next;
	next->prev = newNode; 
    }
    size++;
}

void DoubleLinkedList::remove(unsigned int index = 0)
{
    if(index >= size){
       cout << "Error:List is empty(Nothing to remove)!\n";
       return;
    }
    if(index == 0){
        Node* secondNode = this->firstNode->next;
        delete firstNode;
	secondNode->prev = NULL;
        firstNode = secondNode;
    } else if(index == (size-1)){
        Node* prevNode = this->lastNode->prev;
        delete lastNode;
	prevNode->next = NULL;
    } else {
	Node* nodeToRemove = (Node*)findNodeByIndex(index);
	Node* prevNode = nodeToRemove->prev;
        Node* nextNode = nodeToRemove->next;
	delete nodeToRemove;
	prevNode->next = nextNode;
	nextNode->prev = prevNode;
    }
    size--;            
}

int DoubleLinkedList::find(int value)
{
    Node* current = firstNode;
    for(int i=0; i < size; i++){
        if(current->value == value){
             return i;
	}
        current = current->next;
    }
}

int DoubleLinkedList::length()
{
    return size;
}

int& DoubleLinkedList::operator[](unsigned int i)
{
    static int a = -1;
    int& result = a;
    Node* tmp = (Node*)findNodeByIndex(i);
    if(tmp != NULL){
        result = tmp->value;
    }
    return result;
}
