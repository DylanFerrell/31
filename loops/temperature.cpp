#include <iostream> 
#include <iomanip> 
#include <string> 

double celciustofarenheit(double x)
{
    return x * 9/5 + 32;
}

double farenheittocelcius(double x)
{
    return (x - 32) * 5/9;
}

double kelvintocelcius(double x)
{
    return x - 273.15;
}

double celciustokelvin(double x)
{
    return x + 273.15;
}

double kelvintofarenheit(double x)
{
    return (x - 273.15) * 9/5 + 32;
}

double farenheittokelvin(double x)
{
    return ((x - 32) * 5/9 + 273.15);
}

void test()
{
    std::cout << std::fixed << std::setprecision(2);

    std::cout << "Enter temperature: " << '\n';
        double utemp{ };
        std::cin >> utemp; 
        
        std::cout << "Input Unit: " << '\n';
        std::string input{ };
        std::cin >> input; 
        
        std::cout << "Output Unit: " << '\n';
        std::string output{ };
        std::cin >> output; 
        
        if ((output == "F" || output == "f") && (input == "C" || input == "c"))
                std::cout << utemp << input << " is " << celciustofarenheit(utemp) << output << '\n';

        else if ((output == "C" || output == "c") && (input == "F" || input == "f" ))
                std::cout << utemp << input << " is " << farenheittocelcius(utemp) << output << '\n';

        else if ((output == "K" || output == "k") && (input == "C" || input == "c" ))
                std::cout << utemp << input << " is " << celciustokelvin(utemp) << output << '\n';

        else if ((output == "C" || output == "c") && (input == "K" || input == "k" ))
                std::cout << utemp << input << " is " << kelvintocelcius(utemp) << output << '\n';

        else if ((output == "K" || output == "k") && (input == "F" || input == "f" ))
                std::cout << utemp << input << " is " << farenheittokelvin(utemp) << output << '\n';

        else if ((output == "F" || output == "f") && (input == "K" || input == "k" ))
                std::cout << utemp << input << " is " << kelvintofarenheit(utemp) << output << '\n';
        else 
            std::cout << "Enter a valid temperature character! C, K, or F!" << '\n';
            
}


int main() 
{
    bool start { 1 };
    
    while (start == 1)
            {
                test();
                std::string again { }; 
                std::cout << "Convert again? (y/n): " << '\n';
                std::cin >> again; 
                

                    {if (again == "y")
                        {
                            start = 1;
                        }
                
                    else 
                        {
                            start = 0;
                                std::cout << "Goodbye!" << '\n';
                        }
                    }
            }

return 0;
} 




