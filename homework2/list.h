#ifndef _LIST_H
#define _LIST_H

class Node {
public:
    int data;
    Node *next;
};

class LinkedList {
public:
    Node *head;
    void Append(int data);
    void Prepend(int data);
    int Length();
    void Print();
};

#endif