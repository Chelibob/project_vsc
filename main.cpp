#include <iostream>
#include <iomanip>
#include <windows.h>
#include "add.h"
#include "partone.hpp"

int main()
{
    SetConsoleCP(65001);   
	SetConsoleOutputCP(65001);
    float distance, consumption, pricePerLitre;
    std::cout << "Расстояние до дачи (км): ";
    std::cin >> distance;
    std::cout << "Расход бензина (литров на 100 км пробега): ";
    std::cin >> consumption;
    std::cout << "Цена литра бензина (руб.): ";
    std::cin >> pricePerLitre;
    std::cout << "Поездка на дачу и обратно обойдется в " << std::setprecision(4) << tripCalculator(distance,consumption,pricePerLitre) << " руб.";
    return 0;
}
