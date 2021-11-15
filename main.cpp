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

//Эта программа мне максимально не нравится, возможно в будущем я к ней вернусь и улучшу ее

int main()
{
  int hoursMinutesSecondsInDay = 86400;
  int coefMinutes = 60;
  int hoursCoef = 3600;

  std::cout << "Enter the number of seconds: ";
  int seconds = getNumber();
  int startSeconds = seconds;
  int days = seconds / hoursMinutesSecondsInDay;
  seconds = seconds - days * hoursMinutesSecondsInDay;
  int hours = seconds / hoursCoef;
  seconds = seconds - hours * hoursCoef;
  int minutes = seconds / coefMinutes;
  seconds = seconds - minutes * coefMinutes;
  std::cout << startSeconds << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds";
  return 0;
}   
