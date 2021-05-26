#ifndef _LIST_H
#define _LIST_H

class Node {
public:
    int data;
    Node *next;
    Node *prev;
};

class LinkedList {
public:
    Node *head;
    Node *tail;
    void Append(int data);
    void Prepend(int data);
    int Length();
    void Print();
    void PrintReverse();
};

#endif