/*
Упражнения раздела 1.5.2
Упражнение 1.23. Напишите программу, которая читает несколько
транзакций и подсчитывает количество транзакций для каждого ISBN.
Упражнение 1.24. Проверьте предыдущую программу, введя несколько
транзакций, представляющих несколько ISBN. Записи для каждого ISBN
должны быть сгруппированы.

НЕ решены, т.к. возникает ошибка:
main.cpp: In function ‘int main()’:
main.cpp:14:15: error: ‘std::string Sales_item::isbn’ is private within this context
   14 |     if (item1.isbn() == item2.isbn()) {
      |

*/

#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item item1, item2;
    std::cin >> item1 >> item2;
    // проверить item1 и item2 одна и та же книга 
    if (item1.isbn() == item2.isbn()) {
        std::cout << item1 + item2 << std::endl;
        return 0;
    } else {
        std::cerr << "Data must refer to same ISBN" 
            << std::endl;
        return -1;
    }
}
