#include <iostream>
#include <cstdint>

unsigned int factorial(unsigned int);

int main(int argc, char* argv[])
{
   unsigned num = std::atoi(argv[1]);
   std::cout << num << "! = " << factorial(num) << std::endl;
}

unsigned int factorial(unsigned int x)
{
   unsigned int n;
   if(x <= 1)
      n = 1;
   else
      n = x * factorial(x - 1);
   return n;
}
