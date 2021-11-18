#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h>
#include <cmath>
#include <vector>
#include <cstdint>



//Очень долго парился над этой программой, но в итоге понял, что немного затупил по черному
//Задача простая, но затуп забрал много времени
long long getNumber()
{
    long long iNumber;
    std::cin >> iNumber;
    return iNumber;
}


double getPercent(long long worldPopulation, long long countryPopulation)
{
    return ((double)countryPopulation / (double)worldPopulation) * 100.0;
}

int main()
{
    std::cout << "Enter the world's population: ";
    long long worldPopulation = getNumber();
    std::cout << "Enter the population of the US: ";
    long long countryPopulation = getNumber();
    double percent = getPercent(worldPopulation, countryPopulation);
    std::cout << "The population of the US is " << percent <<  "% of the world population";

    return 0;
}
