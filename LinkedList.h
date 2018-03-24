#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include <iostream>

using namespace std;

// PKMN LINKED LIST CLASS
template <typename T>
class LinkedList {
    private:
        class Node {
            private:
                T* value;
                Node* next;
            public:
                Node(T* obj);
                ~Node();
                Node* getNext();
                void setNext(Node* node);
                T* getValue();
        };
        Node* head;
        size_t length;

    public:
        LinkedList();
        ~LinkedList();
        size_t getLength();
        Node* getHead();
        void prepend(Node* node);
        void append(Node* node);
        void add(T* pkmn);
        Node* getNode(int n);
};

#endif