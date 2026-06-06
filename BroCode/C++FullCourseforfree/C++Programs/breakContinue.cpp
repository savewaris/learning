#include <iostream>

int main(){

  // Break = break out of a loop
  // Continue = skip current iteration

  for (int i = 1; i<=20; i++) {
    if(i==13){
      // break;
      continue;
    }
    std::cout << i << '\n';
  }

  return 0;
}