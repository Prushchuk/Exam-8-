#include "function.h"

int main() {
    Sklad sklads[500];
    int sklads_count = 0;
    int index;


    add_tovar(sklads, sklads_count);

    cout << "Enter index of product to delete: ";
    cin >> index;
    delete_tovar(sklads, sklads_count, index);

    cout << "Enter index of product to replace: ";
    cin >> index;
    zamina_tovar(sklads, sklads_count, index);

    cout << "Enter index of product to search: ";
    cin >> index;
    search_tovar(sklads, sklads_count, index);

    sortByTovar(sklads, sklads_count);
}