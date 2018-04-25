#include "SingleLinkedList.h"
#include <iostream>
using namespace std;

Node* SingleLinkedList::findNodeByIndex(int index) const {
    if(index >= size){
        return NULL;
    }
    Node* tmp = this->firstNode;
    for(int i=1; i <= index; i++){
        tmp = tmp->next;
    }
    return tmp;
}


SingleLinkedList::SingleLinkedList() :size(0)
{

}

SingleLinkedList::SingleLinkedList(const SingleLinkedList& list)
{
    for(int i=0; i < size; i++){
        insert(list.findNodeByIndex(i)->value,i);
    }
}

SingleLinkedList::~SingleLinkedList()
{
    Node* tmp;
    for(int i=0; i < size; i++){
	tmp = firstNode->next;
        delete firstNode;
        firstNode = tmp;	
    }
}

void SingleLinkedList::insert(int value, unsigned int index = 0)
{
    Node* newNode = new Node;
    newNode->value = value;
    if(!index){
	newNode->next = firstNode;
	this->firstNode = newNode;
    } else if(index == (size-1)){
        newNode->next = NULL;
        if(this->lastNode){
            this->lastNode->next = newNode; 
        } else {
            this->firstNode = newNode;
        }
        this->lastNode = newNode;
    } else {
	Node* prev = findNodeByIndex(index-1);
	newNode->next = findNodeByIndex(index);
	prev->next = newNode;   
    }
    size++;
}

void SingleLinkedList::remove(unsigned int index)
{
    if(index >= size){
       cout << "Error:List is empty(Nothing to remove)!\n";
       return;
    }
    if(!index){
        Node* secondNode = this->firstNode->next;
        delete firstNode;
        firstNode = secondNode;
    } else {
        Node* prevNode = findNodeByIndex(index-1);
        Node* nodeToRemove = prevNode->next;
        prevNode->next = nodeToRemove->next;
        delete nodeToRemove;
    }
    size--;            
}

int SingleLinkedList::find(int value)
{
    Node* current = firstNode;
    for(int i=0; i < size; i++){
        cout << i << " " << current->value << "\n";
        if(current->value == value){
             return i;
	}
        current = current->next;
    }

}

int SingleLinkedList::length()
{
    return size;
}

int& SingleLinkedList::operator[](unsigned int i)
{
    static int a = -1;
    int& result = a;
    Node* tmp = findNodeByIndex(i);
    if(tmp){
        result = tmp->value;
    }
    return result;
}
