#include "list.h"
#include <iostream>

using namespace std;

void LinkedList::Append(int data) {
    Node *newNode = new Node;
    newNode -> data = data;

    if (head) {
        Node *cur = head;
        newNode -> next = tail;
        tail -> prev -> next = newNode;
        newNode -> prev = tail -> prev;
        tail -> prev = newNode;
    } else {
        head = new Node;
        tail = new Node;
        head -> next = newNode;
        newNode -> next = tail;
        tail -> prev = newNode;
        newNode -> prev = head;
    }
}

void LinkedList::Prepend(int data) {
    Node *newNode = new Node;
    newNode -> data = data;

    if (head) {
        Node *cur = head;
        newNode -> next = head -> next;
        head -> next = newNode;
        newNode -> next -> prev = newNode;
        newNode -> prev = head;
    } else {
        head = new Node;
        tail = new Node;
        head -> next = newNode;
        newNode -> next = tail;
        tail -> prev = newNode;
        newNode -> prev = head;
    }
}

int LinkedList::Length() {
    if (head) {
        Node *cur = head -> next;
        int cnt = 0;
        while (cur != tail) {
            cur = cur -> next;
            cnt++;
        }
        return cnt;
    } else {
        return 0;
    }
}

void LinkedList::Print() {
    if (head) {
        Node *cur = head -> next;
        while (cur != tail) {
            cout << cur -> data << " ";
            cur = cur -> next;
        }
        cout << endl;
    } else {
        return;
    }
}

void LinkedList::PrintReverse() {
    if (head) {
        Node *cur = tail -> prev;
        while (cur != head) {
            cout << cur -> data << " ";
            cur = cur -> prev;
        }
        cout << endl;
    } else {
        return;
    }
}