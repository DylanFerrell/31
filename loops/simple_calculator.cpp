#include <iostream> 

int calculate(int x, int y, char z)
{
    switch(z)
    {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        return x / y;
    case '%':
        return x % y;
    default:
        std::cout << "Error not a valid operation\n"; 
        return 0;
    }

    
}

int main()
{
    std::cout << "Please enter an integar: " << '\n';
    int x{ }; 
    std::cin >> x;

    std::cout << "Please enter an integar: " << '\n';
    int y{ }; 
    std::cin >> y;

    std::cout << "Please enter an operator: " << '\n';
    char z{ }; 
    std::cin >> z;

    int result{ calculate(x, y, z)};
    std::cout << x << " " << z << " " << y << " equals " << calculate(x, y, z) << '\n';

    return 0;
}