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

    cout << "تمت إضافة الصنف: " << name << " - الكمية: " << qty << endl;
}

void LinkedList::removeItem(string name) {
    if (!head) {
        cout << "المخزن فارغ! لا يوجد أصناف للحذف." << endl;
        return;
    }

    if (head->itemName == name) {
        Node* del = head;
        head = head->next;
        delete del;
        cout << "تم حذف الصنف بنجاح: " << name << endl;
        return;
    }

    Node* temp = head;
    while (temp->next && temp->next->itemName != name)
        temp = temp->next;

    if (temp->next) {
        Node* del = temp->next;
        temp->next = temp->next->next;
        delete del;
        cout << "تم حذف الصنف: " << name << endl;
    } else {
        cout << "الصنف غير موجود!" << endl;
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
        cout << "المخزن فارغ حالياً." << endl;
        return;
    }

    cout << "\n===== محتويات المخزن =====" << endl;
    Node* temp = head;
    while (temp) {
        cout << "الصنف: " << temp->itemName << " | الكمية: " << temp->quantity << endl;
        temp = temp->next;
    }
    cout << "===========================\n";
}
