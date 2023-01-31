/*
Author: Tamanna Chowdhury
Github: tamannachowdhuryy
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab1A
Write a program smaller.cpp that asks the user to input two integer numbers and prints out the smaller of the two.
*/

#include <iostream>
#include <string> 


//Write a program smaller.cpp that asks the user to input two integer numbers and prints out the smaller of the two.
//smaller
int main() {
  int x,y;
  std::cout << "Enter the first number: " ;
  std::cin >> x;
  std::cout << "Enter the second number: " ; 
  std::cin >> y; 

  if(x < y){
    std::cout << "The smaller of the two is " << x << std::endl;
  } else{
    std::cout <<"The smaller of the two is " << y << std::endl;
  }
  return 0;
}
