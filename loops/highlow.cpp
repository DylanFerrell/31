#include "Random.hpp"
#include <iostream> 
#include <cstddef>
#include <limits> 
int getAndValidateGuess()
{
    while (true)
    {
        int guess{ };
        std::cin >> guess;
        while (!std::cin)
        {
            if (std::cin.eof())
            {
                std::cout << "Exiting..." << '\n';
                std::exit(0);
            }
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            break;
        }
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            if (guess > 100 || guess < 0)
                {
                    std::cout << "Your guess is not between 1 and 100. Input a number between 1 and 100" << '\n';
                    continue;
                }
            else 
                return guess;
        
    }
    
}
int main()
{
    std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is." << '\n';
    bool ntgameover{true};
while (ntgameover)
{    int RNG {Random::get(1, 100)}; 
    for (int tries{ 1 }; tries <= 7; ++tries)
    {
        
        int num{ getAndValidateGuess() };
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
                    std::cout << "Game Reinitialized - I am thinking of a new number between 1 and 100. You have 7 new tries to guess what it is." << '\n';
                    break;
                }
            if (answer == 'n')
                {
                    std::cout << "Thanks for playing" << '\n';
                    break;
                }
            else if (answer != 'n' && answer != 'y')
                {
                    std::cout << "The only accepted inputs are y for yes, and n for no. Try again." << '\n';
                    continue;
                }
            
        } 

    
}
return 0;
}