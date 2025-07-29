#include <iostream>
#include <array>

int main () {

    std::array<int, 10> arr {90, 20, 40, 78, 101, 99, 103, 43, 190, 191 };

   int n {0};

   for (int i = 0; n < arr.size(); ++i)
   {
     if (n < arr[i])
     n = arr[i];
     else ;
   }
std::cout << "The largest number is " << n << '\n';
    return 0;
}