#include "myLib.h"

double factorial(double n)
{
   double total {1};

   while (n > 1)
   {
    total *= n;
    --n;
   }
    return total;
}