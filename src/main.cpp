/*
Упражнения раздела 1.5.2
Упражнение 1.23. Напишите программу, которая читает несколько
транзакций и подсчитывает количество транзакций для каждого ISBN.
*/

#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item item1, item2;
    std::cin >> item1 >> item2;
    if (same_isbn(item1)) {
        std::cout << item1 + item2 << std::endl;
        return 0;
    } else {
        std::cerr << "Data must refer to same ISBN" << std::endl;
        return -1;
    }
}
