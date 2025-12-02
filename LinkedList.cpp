#include "LinkedList.h"

LinkedList::LinkedList() {
    head = nullptr;
}

void LinkedList::addItem(string name, int qty) {
    Node* newNode = new Node(name, qty);

    if (!head) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next)
            temp = temp->next;
        temp->next = newNode;
    }

    cout << " Item added: " << name << " - Quantity: " << qty << endl;
}

void LinkedList::removeItem(string name) {
    if (!head) {
        cout << "The warehouse is empty! There are no items to delete."<< endl;
        return;
    }

    if (head->itemName == name) {
        Node* del = head;
        head = head->next;
        delete del;
        cout << "The item was successfully deleted:" << name << endl;
        return;
    }

    Node* temp = head;
    while (temp->next && temp->next->itemName != name)
        temp = temp->next;

    if (temp->next) {
        Node* del = temp->next;
        temp->next = temp->next->next;
        delete del;
        cout << "Category deleted:" << name << endl;
    } else {
        cout << "This item is not available!" << endl;
    }
}

bool LinkedList::findItem(string name) {
    Node* temp = head;
    while (temp) {
        if (temp->itemName == name) {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void LinkedList::displayItems() {
    if (!head) {
        cout << "The warehouse is currently empty." << endl;
        return;
    }

    cout << "\n=====Store contents =====" << endl;
    Node* temp = head;
    while (temp) {
        cout << "Item: " << temp->itemName << " | Quantity: " << temp->quantity << endl;
        temp = temp->next;
    }
    cout << "===========================\n";
}
