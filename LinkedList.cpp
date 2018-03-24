#include <iostream>
#include "LinkedList.h"

// LINKEDLIST METHODS

template <typename T>
LinkedList<T>::LinkedList(){
    head = 0;
    length = 0;
}

template <typename T>
LinkedList<T>::~LinkedList(){
    // No good memes for this method
}

template <typename T>
size_t LinkedList<T>::getLength() {
    return length;
}

template <typename T>
typename LinkedList<T>::Node* LinkedList<T>::getHead() {
    return head;
}

template <typename T>
void LinkedList<T>::prepend(Node* node){
    head = node;
    length++;
}

template <typename T>
void LinkedList<T>::append(Node* node){
    if (head == 0){
        prepend(node);
    }
    else{
        Node* current = head;
        while (current->getNext() != 0){
            current = current->getNext();
        }
        current->setNext(node);
        length++;
    }
}

template <typename T>
void LinkedList<T>::add(T* obj) {
    append(new Node(obj));
}

template <typename T>
typename LinkedList<T>::Node* LinkedList<T>::getNode(int n) {
    Node* current = head;
    for (int i = 0; i < n; i++) {
        current = current->getNext();
    }
    return current;
}



// NODE METHODS

template <typename T>
LinkedList<T>::Node::Node(T* pkmn) {
    value = pkmn;
    next = 0;
}
template <typename T>
LinkedList<T>::Node::~Node() {
    // No good memes for this method
}
template <typename T>
typename LinkedList<T>::Node* LinkedList<T>::Node::getNext() {
    return next;
}
template <typename T>
void LinkedList<T>::Node::setNext(Node* node) {
    next = node;
}
template <typename T>
T* LinkedList<T>::Node::getValue() {
    return value;
}