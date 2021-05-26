#include "list.h"
#include <iostream>

using namespace std;

void LinkedList::Append(int data) {
    Node *newNode = new Node;
    newNode -> data = data;

    if (head) {
        Node *cur = head;
        while (cur -> next) cur = cur -> next;
        cur -> next = newNode;
    } else {
        head = new Node;
        head -> next = newNode;
    }
}

void LinkedList::Prepend(int data) {
    Node *newNode = new Node;
    newNode -> data = data;

    if (head) {
        newNode -> next = head -> next;
        head -> next = newNode;
    } else {
        head = new Node;
        head -> next = newNode;
    }
}

int LinkedList::Length() {
    if (head) {
        Node *cur = head -> next;
        int cnt = 0;
        while (cur) {
            cur = cur -> next;
            cnt++;
        }
        return cnt;
    } else {
        return 0;
    }
}