#include <iostream>
#include <string>
#include "stdio.h"
#include <iomanip>
#include <windows.h>
#include <cmath>
#include <vector>
#include <cstdint>


int getNumber()
{
  int iNumber;
  std::cin >> iNumber;
  return iNumber;
}

//Программа далека от идельной, многие вещи здесь можно переделать
//НО функциональность, которая от нее требуется она выполняет
int main()
{
  std::cout << "Enter a latitude in degrees, minutes, and seconds: " << std::endl;
  std::cout << "First, enter the degrees: ";
  int degrees = getNumber();
  std::cout << "Next, enter the minutes of arc: ";
  int minutes = getNumber();
  std::cout << "Finally, enter the seconds of arc: ";
  int seconds = getNumber();
  float coef = 60.0;
  float latitudeInDeegres = degrees + ((minutes + (seconds / coef)) / coef);
  std::cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << latitudeInDeegres << " degrees";
  return 0;
}   
