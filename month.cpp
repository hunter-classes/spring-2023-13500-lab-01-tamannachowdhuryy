/*
Author: Tamanna Chowdhury
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab1D
Write a program month.cpp that asks the user to input the year and the month (1-12) and prints the number 
of days in that month (taking into account leap years). You may not use switch case or arrays even if you know these language constructs.
*/

#include <iostream>
int main(){
  int year, month;
  std::cout <<"Enter year: ";
  std::cin >> year;
  std::cout <<"Enter month: ";
  std::cin >> month;
  if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
    std::cout << "31 days" << std::endl;
  } else if (month == 4 || month == 6 || month == 9 || month == 11){
    std::cout << "30 days" << std::endl;
  } else if(month == 2 && ((year % 100 != 0 && year % 4 == 0 || year % 400 == 0 ))){
    std::cout << "29 days" << std::endl;
  } else if(month == 2){
    std::cout << "28 days" << std::endl;
  }
  

  return 0;
}
