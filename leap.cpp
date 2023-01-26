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
