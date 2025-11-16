#include <iostream>

    int main()
    {   
        char alphabet{'a'};
        while (alphabet <= 'z')
        {
            std::cout << alphabet << ' ' << int(alphabet) << '\n';
            ++alphabet;
        }
        
        return 0;
    }
    
