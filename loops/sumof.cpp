#include <cstdint> 
#include <iostream>

int sumTo(int parameter) 
{
    int total{0};
    for (int i{ 0 }; i <= parameter; i++)
    {
        total += i;
    }
    
   return total;
}
int main()
{
   std::cout << "What number would you like a sum of?" << '\n';
   int total{ };
   std::cin >> total; 

  
   std::cout << sumTo(total);

    return 0;
}