/*
*Упражнение 1.10. Кроме оператора ++, который добавляет 1 к своему
*операнду, существует оператор декремента (--), который вычитает 1.
*Используйте оператор декремента, чтобы написать цикл while,
*выводящий на экран числа от десяти до нуля.
*/

#include <iostream>

int main() {
    int i = 10;
    while (i >= 1) {
        std::cout << i << " ";
        --i;
    }
    std::cout << std::endl;   
}