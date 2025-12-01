#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string itemName;
    int quantity;
    Node* next;

    Node(string name, int qty) {
        itemName = name;
        quantity = qty;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList();
    void addItem(string name, int qty);
    void removeItem(string name);
    void displayItems();
    bool findItem(string name);
};

#endif
