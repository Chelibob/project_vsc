#include <iostream>
#include "add.h"

int main()
{
     std::cout << "Input a keyboard character: "; // предположим, что пользователь ввел abcd
 
    char ch;
    std::cin >> ch; // ch = 'a', "bcd" останется во входном буфере
    std::cout << ch << " has ASCII code " << static_cast<int>(ch) << std::endl;
 
    // Обратите внимание, следующий cin не просит пользователя что-либо ввести, данные берутся из входного буфера!

    return 0;
}