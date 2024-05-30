/*
*Упражнение 1.12. Что делает следующий цикл for? 
*Каково финальное значение переменной sum?
*int sum = 0;
*for (int i = -100; i <= 100; ++i)
*   sum += i;
*/

#include <iostream>

int main() {
    int sum = 0;
    for (int i = -100; i <= 100; ++i) {
        sum += i;
    }
    std::cout << "Sum of 1 to 10 inclusive is "
        << sum << std::endl;   
}