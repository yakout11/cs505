#include "LinkedList.h"

int main() {
    LinkedList store;
    int choice, qty;
    string name;

    while (true) {
        cout << "\n===== برنامج إدارة المخازن (LinkedList) =====" << endl;
        cout << "1- إضافة صنف" << endl;
        cout << "2- حذف صنف" << endl;
        cout << "3- عرض المخزن" << endl;
        cout << "4- البحث عن صنف" << endl;
        cout << "5- خروج" << endl;
        cout << "اختيارك: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "أدخل اسم الصنف: ";
            cin >> name;
            cout << "أدخل الكمية: ";
            cin >> qty;
            store.addItem(name, qty);
            break;

        case 2:
            cout << "أدخل اسم الصنف الذي تريد حذفه: ";
            cin >> name;
            store.removeItem(name);
            break;

        case 3:
            store.displayItems();
            break;

        case 4:
            cout << "أدخل اسم الصنف: ";
            cin >> name;
            if (store.findItem(name))
                cout << "الصنف موجود بالفعل في المخزن." << endl;
            else
                cout << "الصنف غير موجود." << endl;
            break;

        case 5:
            cout << "تم إنهاء البرنامج." << endl;
            return 0;

        default:
            cout << "اختيار غير صحيح!" << endl;
        }
    }
}
