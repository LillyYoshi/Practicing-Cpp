#include <iostream>
#include <array>

int main () {

   constexpr std::array<int, 10> arr {90, 20, 40, 78, 101, 99, 103, 43, 190, 191 };

int n {0};

   for (std::size_t i = 0; i < arr.size(); ++i)
   {
     if (n < arr[i])
     n = arr[i];
     else ;
   }
std::cout << "The largest number is " << n << '\n';
    return 0;
}