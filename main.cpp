#include <iostream>
#include <string>
#include "stdio.h"
#include <iomanip>
#include <windows.h>
#include <cmath>
#include <vector>
#include <cstdint>

float getFloat()
{
  std::cout << "Enter the weight in pounds " ;
  float iNumber;
  std::cin >> iNumber;
  return iNumber;
}

int getInchs()
{
  std::cout << "Enter the height in inchs " ;
  int iNumber;
  std::cin >> iNumber;
  return iNumber;
}

int getFoots()
{
  std::cout << "Enter the height in foots " ;
  int iNumber;
  std::cin >> iNumber;
  return iNumber;
}

int main()
{
  int heightFoots = getFoots();
  int heightInchs = getInchs();
  float weight = getFloat();
  const int footInInch = 12;
  const float metersCoef = 0.0254;
  const float weightCoef = 2.2;
  float heightInMeters = (heightFoots * footInInch + heightInchs) * metersCoef;
  float weightInKilo = weight / weightCoef;
  float bodyMassIndex = weightInKilo / (heightInMeters * heightInMeters);
  std::cout << "Your height in meters: " << heightInMeters << std::endl;
  std::cout << "Your weight in kilograms: " << weightInKilo << std::endl;
  std::cout << "Your body mass index: " << bodyMassIndex << std::endl;
  return 0;
}   
