#include "Random.hpp"
#include <iostream> 
#include <cstddef>

int main()
{
    std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is." << '\n';
    bool ntgameover{true};
while (ntgameover)
{    int RNG {Random::get(1, 100)}; 
    for (int tries{ 1 }; tries <= 7; ++tries)
    {
        
        int num{ };
        std::cin >> num;
        std::cout << "Guess #" << tries << ": "  << num << '\n';

        if (num == RNG)
            {
                std::cout << "Correct! You win!" << '\n';
                ntgameover = false;
                
            }
        if (num < RNG)
            {
                std::cout << "Your guess is too low" << '\n';
            }
        if (num > RNG)
            {
            std::cout << "Your guess is too high" << '\n';
            }
        if (tries == 7)
            {
                std::cout << "Sorry, you lose. The correct number was " << RNG << "." << '\n';
                ntgameover = false; 
                
            }
        
    
    }


    while (ntgameover == false)
        {
            std::cout << "Would you like to play again (y/n)?" << '\n';
            char answer{ };
            std::cin >> answer;
            
            if (answer == 'y')
                {   
                    ntgameover = true;
                    break;
                }
            if (answer == 'n')
                {
                    std::cout << "Thanks for playing" << '\n';
                    break;
                }
            
        } 

    
}
return 0;
}