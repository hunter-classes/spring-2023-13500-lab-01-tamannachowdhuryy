/*
Author: Tamanna Chowdhury
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab1C
Asks the user to input an integer representing a year number that determines whether it is a leap year or common year.
*/



#include <iostream>
int main(){
  int year;
  std::cout << "Enter year: ";
  std::cin >> year; 
  if (year % 4 != 0){
    std::cout << "common year" ;
  } else if(year % 100 != 0){
    std::cout << "it is a leap year "; 
  } else if (year % 400 !=0){
    std::cout << "it it a common year";
  } else{
    std::cout << "it is a leap year";
  }
  return 0;
}
