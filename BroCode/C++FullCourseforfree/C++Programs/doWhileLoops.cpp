#include <iostream>

int main() {
  
  // do while loop = do some block of code first, Then repeat again if condition is true

  int number;

  // std::cout << "Enter a positive number: ";
  // std::cin >> number;

  // while (number < 0){
  //   std::cout << "Enter a positive number: ";
  //   std::cin >> number;
  // }
  
  do {
    std::cout << "Enter a positive number: ";
    std::cin >> number;
  } while (number < 0);

  std::cout << "The number is: " << number;

  return 0;
}