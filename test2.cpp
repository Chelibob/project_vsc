//Итоговый тест по второй главе. https://ravesli.com/glava-2-itogovyj-test/

#include <iostream>
#include "constants.h"
//Задание 3. Принимает у пользователя два числа с плавающей точкой и оператор,выводит результат математечиской операции над числами

//Функция выполенения математической операции
void calcFunction(double fValue, double sValue, char op)
{
    if(op == '+')
        std::cout << fValue << " + " << sValue << " = " << fValue + sValue;
    else if(op == '*')
        std::cout << fValue << " * " << sValue << " = " << fValue * sValue;
    else if(op == '-')
        std::cout << fValue << " - " << sValue << " = " << fValue - sValue;
    else if(op == '/')
        std::cout << fValue << " / " << sValue << " = " << fValue / sValue;
}

//Функция пользовательского ввода числа с плавающей точкой
double getDouble()
{
    std::cout << "Enter a double value: ";
    double x;
    std::cin >> x;
    return x;
}

//Функцкция пользовательского ввода оператора
char getOperator()
{
    std::cout << "Enter one of the following: +, -, *, or /: ";
    char op;
    std::cin >> op;
    return op;
}

//То что должно быть в функции main
void main1()
{
    double x = getDouble();
    double y = getDouble();
    char op = getOperator();
    if(op != '+' || '*' || '-' || '/')
        std::cout << "Incorrect operator, try gain later!";
    else 
        calcFunction(x, y, op);
}


/*Задание 4.
имулятор падения мячика с башни. Пользователь вводит высоту башни, программа выводит расстояние от земли, на котором находится мячик
после 0, 1, 2, 3, 4, 5 секунд.
*/

//Функция пользовательского ввода высоты башни
double getHeight()
{
    std::cout << "Enter the initial height of the tower in meters: ";
    double height;
    std::cin >> height;
    return height;
}

//Функция подсчета высоты мячика от земли, по истечении заданной секунды
double calculateHeight(double height, int second)
{
    double distanceFallen = (constants::gravity * second*second)/2;
    return height - distanceFallen;
}

//Функция вывода результата
void printCalculatedHeight(double height, int second)
{
    if (calculateHeight(height,second) > 0.0)
        std::cout << "At " << second << " seconds, the ball is at height: " << calculateHeight(height,second) << " meters." << "\n";
    else
        std::cout << "At " << second << " seconds, the ball is on the ground." << "\n";
    
}

//То что должно быть в функции main
int main2()
{
    const double towerHeight = getHeight();
    printCalculatedHeight(towerHeight, 0);
    printCalculatedHeight(towerHeight, 1);
    printCalculatedHeight(towerHeight, 2);
    printCalculatedHeight(towerHeight, 3);
    printCalculatedHeight(towerHeight, 4);
    printCalculatedHeight(towerHeight, 5);
}