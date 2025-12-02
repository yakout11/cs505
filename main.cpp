#include "LinkedList.h"

int main() {
    LinkedList store;
    int choice, qty;
    string name;

    while (true) {
        cout << "\n===== Warehouse management software (LinkedList) =====" << endl;
        cout << "1- Add item" << endl;
        cout << "2- Remove item" << endl;
        cout << "3- Display warehouse" << endl;
        cout << "4- Search for item" << endl;
        cout << "5- Exit" << endl;
        cout << "اختيارك: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter the item name:";
            cin >> name;
            cout << "Enter quantity: ";
            cin >> qty;
            store.addItem(name, qty);
            break;

        case 2:
            cout << "Enter the name of the item you want to delete:";
            cin >> name;
            store.removeItem(name);
            break;

        case 3:
            store.displayItems();
            break;

        case 4:
            cout << "Enter the item name: ";
            cin >> name;
            if (store.findItem(name))
                cout << "The item is already in stock." << endl;
            else
                cout << "This item is not available." << endl;
            break;

        case 5:
            cout << "The program has ended."<< endl;
            return 0;

        default:
            cout << "Incorrect choice!" << endl;
        }
    }
}
