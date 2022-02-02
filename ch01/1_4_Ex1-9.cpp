#include <iostream>

int main()
{
  int st = 50, en= 100, sum = 0;
  while (st <= en){
    sum += st;
    ++st;
  }
  std::cout << "The sum of 50 to 100 is " << sum << std::endl;
  return 0;
}