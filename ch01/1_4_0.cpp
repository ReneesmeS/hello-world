#include <iostream>

int main()
{
  int sum = 0, val = 0, max = 15;
  while (val <= max) {
    sum += val;
    ++val;
  }
  std::cout << "Sum of 1 to " << max << " is " << sum << std::endl;
  return 0;
}