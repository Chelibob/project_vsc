//В этом файле храняться решения для практических заданий со страницы https://ravesli.com/praktika-chast-2/

#include <iostream>
//Функция, которая считает стоимость проезда до дачи и обратно
/* Для рассчета стоимости проезда необходимо :
    1) Разделить расход на 100 км, для того что бы найти количество литров на один киллометр
    2) Умножить расход на один килломтр на расстояние до конечной точки
    3) Получившуюся величину умножить на стоимость одного литра бензина
    4) Удвоить конечный результат, для нахождения стоимости бензина на прямую и обратную дороги
*/
float tripCalculator(float distance, float consumption, float pricePerLitre)
{
    return 2*(pricePerLitre * ((consumption/100)*distance));
}

double getDiscountPrice(double price)
{
    if (price > 500 && price < 1000)
    {
        std::cout << "Вам предоставляется скидка в 3%";
        std::cout << "Сумма с учетом скидки: " << price * 0.97 << " руб.";
    }
    else if (price > 1000)
    {
        std::cout << "Вам предоставляется скидка в 5%";
        std::cout << "Сумма с учетом скидки: " << price * 0.95 << " руб.";
    }
    else
    {
        std::cout << "Скидка предоставляется на сумму покупки больше 500 рублей";
        std::cout << "Итоговая сумма " << price << " руб.";
    }
    
    
}

double getPrice()
{
    std::cout << "Введите сумму покупки: ";
    double price;
    std::cin >> price;
    return price;
}